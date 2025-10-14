# ----------------------------------------------------------------------------
# Config Names
# ----------------------------------------------------------------------------

ROOT := $(PWD)

BASE_NAME := $(shell basename $(ROOT))
BASE_NAME_US := $(subst -,_,$(BASE_NAME))
SHORT_NAME := $(shell echo $(BASE_NAME) | cut -d '-' -f 3)

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	SEDCMD := gsed
else
	SEDCMD := sed
endif

VERSION := $(shell $(SEDCMD) -En 's/^version[[:space:]]*=[[:space:]]*"([^"]+)"/\1/p' Cargo.toml)

FILE_EXT := sdm

# ----------------------------------------------------------------------------
# Config ❯ Directories
# ----------------------------------------------------------------------------

SRC_DIR := $(ROOT)/src
TST_DIR := $(ROOT)/test

BINDING_DIR := $(ROOT)/bindings

BUILD_DIR := $(ROOT)/build

TARGET_DIR := $(ROOT)/target

NODE_SRC_DIR := $(BINDING_DIR)/node
NODE_BUILD_DIR := $(BUILD_DIR)

PYTHON_ROOT_DIR := $(BINDING_DIR)/python
PYTHON_SRC_DIR := $(PYTHON_ROOT_DIR)/$(BASE_NAME_US)
PYTHON_BUILD_DIR := $(ROOT)/build
PYTHON_TARGET_DIR := $(TARGET_DIR)/python

RUST_SRC_DIR := $(BINDING_DIR)/rust
RUST_TARGET_DIR := $(TARGET_DIR)

SWIFT_PKG_NAME := $(shell echo $(BASE_NAME_US) | $(SEDCMD) -E 's/(^|_)([a-z])/\U\2/g; s/_//g')
SWIFT_SRC_DIR := $(BINDING_DIR)/swift/$(SWIFT_PKG_NAME)
SWIFT_BUILD_DIR := $(ROOT)/.build
SWIFT_TARGET_DIR := $(TARGET_DIR)/swift

INSTALL_ROOT_DIR ?= /usr/local
INSTALL_LIB_DIR := $(INSTALL_ROOT_DIR)/lib
INSTALL_INCLUDE_DIR := $(INSTALL_ROOT_DIR)/include

WASM_TARGET_DIR := $(TARGET_DIR)/wasm

# ----------------------------------------------------------------------------
# Config ❯ Tools
# ----------------------------------------------------------------------------

MISE := mise exec

TS_CLI := $(MISE) tree-sitter -- tree-sitter
TS_WASM_CLI := $(MISE) emsdk tree-sitter -- tree-sitter
TS_BUILD := build
TS_GENERATE_ABI ?=latest
TS_GENERATE := generate --log --abi=$(TS_GENERATE_ABI)
TS_PARSE := parse
TS_TEST := test
TS_TEST_FLAGS :=

# ----------------------------------------------------------------------------
# Config ❯ Build Flags
# ----------------------------------------------------------------------------

BUILD_KIND ?= release

ifeq ($(BUILD_KIND), debug)
	NODE_BUILD_TYPE := Debug
	RUST_BUILD_MODE :=
else ifeq ($(BUILD_KIND), release)
	NODE_BUILD_TYPE := Release
	RUST_BUILD_MODE := --release
else
	$(error Unknown build kind: '$(BUILD_KIND)')
endif

ifeq ($(OS),Windows_NT)
	LIB_PREFIX=
	DYLIB_EXT := dll
else
	LIB_PREFIX=lib

	ifeq ($(UNAME_S),Linux)
		DYLIB_EXT := so
        CCFLAGS += -D LINUX
    else ifeq ($(UNAME_S),Darwin)
		DYLIB_EXT := dylib
        CCFLAGS += -D OSX -I /opt/homebrew/include
	else
		$(error Unknown/unsupported platform: '$(UNAME_S)')
    endif

	ifeq ($(BUILD_KIND), debug)
		TS_TEST_FLAGS := -dD0
	endif
endif

# ----------------------------------------------------------------------------
# Config ❯ Targets
# ----------------------------------------------------------------------------

PARSER_HDR_FILE := $(SRC_DIR)/tree_sitter/parser.h
PARSER_SRC_FILE := $(SRC_DIR)/parser.c
PARSER_LIB_FILE := $(LIB_PREFIX)$(BASE_NAME).$(DYLIB_EXT)
PARSER_LIB := $(BUILD_DIR)/$(PARSER_LIB_FILE)

BINDING_NODE_LIB := $(BASE_NAME_US)_binding.node
BINDING_NODE := $(NODE_BUILD_DIR)/$(NODE_BUILD_TYPE)/$(BINDING_NODE_LIB)

BINDING_PYTHON_SDIST := $(shell python3 $(PYTHON_ROOT_DIR)/dist_name.py source $(PYTHON_TARGET_DIR))
BINDING_PYTHON_WHEEL := $(shell python3 $(PYTHON_ROOT_DIR)/dist_name.py wheel $(PYTHON_TARGET_DIR))

BINDING_RUST_LIB := lib$(BASE_NAME_US).rlib
BINDING_RUST := $(RUST_TARGET_DIR)/$(BUILD_KIND)/$(BINDING_RUST_LIB)

BINDING_WASM_LIB := $(BASE_NAME).wasm
BINDING_WASM := $(WASM_TARGET_DIR)/$(BINDING_WASM_LIB)

BINDING_SWIFT := $(SWIFT_PKG_NAME).swift
BINDING_SWIFT_SRC := $(SWIFT_TARGET_DIR)/$(SWIFT_PKG_NAME)-$(VERSION)-src.zip

ALL_BINDINGS := $(BINDING_RUST) $(BINDING_NODE) $(BINDING_WASM) $(BINDING_SWIFT_SRC) $(BINDING_PYTHON_SDIST) $(BINDING_PYTHON_WHEEL)

# ----------------------------------------------------------------------------
# Start Here
# ----------------------------------------------------------------------------

all: build test

build: build_grammar build_parser build_bindings

test: test_grammar test_bindings

install: install_parser install_bindings

publish: publish_bindings

clean: clean_grammar clean_parser clean_bindings

# ----------------------------------------------------------------------------
# Build ❯ Directories
# ----------------------------------------------------------------------------

$(BUILD_DIR):
	$(info -> creating common build directory)
	@(mkdir -p $@)

$(TARGET_DIR):
	$(info -> creating common target directory)
	@(mkdir -p $@)

$(PYTHON_TARGET_DIR):
	$(info -> creating Python target directory)
	@(mkdir -p $@)

$(SWIFT_TARGET_DIR):
	$(info -> creating Swift target directory)
	@(mkdir -p $@)

$(WASM_TARGET_DIR):
	$(info -> creating WASM target directory)
	@(mkdir -p $@)

# ----------------------------------------------------------------------------
# Build ❯ Grammar
# ----------------------------------------------------------------------------

.PHONY: clean_grammar

build_grammar: $(SRC_DIR)/grammar.json $(SRC_DIR)/node-types.json $(PARSER_SRC_FILE) $(PARSER_HDR_FILE)

$(SRC_DIR)/grammar.json: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

$(SRC_DIR)/node-types.json: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

$(PARSER_HDR_FILE): $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

$(PARSER_SRC_FILE): $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

test_grammar: clean_grammar $(SRC_DIR)/grammar.json
	$(info -> running grammar tests)
	$(TS_CLI) $(TS_TEST) $(TS_TEST_FLAGS)
	$(info -> parsing grammar examples)
	$(TS_CLI) $(TS_PARSE) examples/*.sdm --quiet --time

clean_grammar:
	$(info -> removing grammar cruft)
	@(rm -f $(TST_DIR)/corpus/*.$(FILE_EXT)~ $(TST_DIR)/corpus/.*.\~undo-tree\~)
	@(rm -f $(TST_DIR)/highlight/*.$(FILE_EXT)~ $(TST_DIR)/highlight/.*.\~undo-tree\~)
	@(rm -f $(TST_DIR)/tags/*.$(FILE_EXT)~ $(TST_DIR)/tags/.*.\~undo-tree\~)

# ----------------------------------------------------------------------------
# Build ❯ Parser Library
# ----------------------------------------------------------------------------

.PHONY: clean_parser

INCLUDE_DIR := $(SRC_DIR)/tree_sitter

build_parser: $(PARSER_LIB)

$(PARSER_LIB): $(PARSER_SRC_FILE) $(PARSER_HDR_FILE) | $(BUILD_DIR)
	$(info -> building parser library v$(VERSION) into $(PARSER_LIB))
	@($(TS_CLI) $(TS_BUILD) -o $(PARSER_LIB))

install_parser: $(INSTALL_LIB_DIR)/$(PARSER_LIB_FILE) $(INSTALL_INCLUDE_DIR)/parser.h

$(INSTALL_LIB_DIR)/$(PARSER_LIB_FILE): $(PARSER_LIB)
	$(info -> installing parser library v$(VERSION) into $(INSTALL_LIB_DIR))
	@(install -d $(INSTALL_LIB_DIR))
	@(install -m755 $(PARSER_LIB) $(INSTALL_LIB_DIR)/$(PARSER_LIB_FILE))

$(INSTALL_INCLUDE_DIR)/parser.h: $(INCLUDE_DIR)/parser.h
	$(info -> installing parser headers v$(VERSION) into $(INSTALL_INCLUDE_DIR))
	@(install -d $(INSTALL_INCLUDE_DIR))
	@(install $(INCLUDE_DIR)/parser.h $(INSTALL_INCLUDE_DIR)/parser.h)

clean_parser:
	$(info -> removing parser build files)
	@(rm -f $(PARSER_LIB))

# ----------------------------------------------------------------------------
# Build ❯ Parser Library ❯ Emacs
# ----------------------------------------------------------------------------

.PHONY: generate_for_emacs

EMACS_TS_DIR ?= $(HOME)/.emacs.d/tree-sitter/
EMACS_ABI := 14
EMACS_BINDING := $(EMACS_TS_DIR)/$(PARSER_LIB_FILE)

emacs: $(EMACS_BINDING) | $(BUILD_DIR)

$(EMACS_BINDING): generate_for_emacs build_parser
	$(info -> installing Emacs binding v$(VERSION) into $(EMACS_BINDING))
	@(cp $(PARSER_LIB) $(EMACS_BINDING))

generate_for_emacs:
	$(info -> generating Emacs binding)
	$(TS_CLI) generate --abi=$(EMACS_ABI)

# ----------------------------------------------------------------------------
# Build ❯ Bindings
# ----------------------------------------------------------------------------

build_bindings: $(ALL_BINDINGS)

test_bindings: test_rust

install_bindings: install_rust

publish_bindings: publish_rust publish_node publish_python

clean_bindings: clean_rust clean_node clean_wasm clean_python clean_swift

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Rust
# ----------------------------------------------------------------------------

.PHONY: clean_rust

CARGO := $(MISE) rust -- cargo
CARGO_FLAGS :=

RUST_BUILD_FILE := $(RUST_SRC_DIR)/build.rs
RUST_GRAMMAR_FILE := $(RUST_SRC_DIR)/grammar.rs

$(RUST_GRAMMAR_FILE): $(SRC_DIR)/node-types.json
	$(info -> generating grammar file for Rust binding in $(BINDING_RUST))
	@(ts-constgen)

$(BINDING_RUST): $(PARSER_LIB) Cargo.toml $(RUST_BUILD_FILE) $(RUST_GRAMMAR_FILE)
	$(info -> building Rust binding v$(VERSION) into $(BINDING_RUST))
	@($(CARGO) build $(RUST_BUILD_MODE) --target-dir $(RUST_TARGET_DIR))

test_rust: $(BINDING_RUST)
	$(info -> testing Rust binding v$(VERSION) tests)
	@($(CARGO) test $(RUST_BUILD_MODE) --target-dir $(RUST_TARGET_DIR))

install_rust: $(BINDING_RUST)
	$(info -> installing Rust binding v$(VERSION) locally)
	@($(CARGO) install --path '.' --locked --target-dir $(RUST_TARGET_DIR))

publish_rust: $(BINDING_RUST)
	$(info -> publishing Rust binding v$(VERSION) to crates.io)
	@($(CARGO) publish --allow-dirty --target-dir $(RUST_TARGET_DIR))

clean_rust:
	$(info -> removing Rust binding files)
	@(rm -rf $(RUST_TARGET_DIR))

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Swift
# ----------------------------------------------------------------------------

.PHONY: clean_swift

SWIFT := $(MISE) swift -- swift

$(BINDING_SWIFT_SRC): Package.swift $(SWIFT_SRC_DIR)/$(SHORT_NAME).h | $(SWIFT_TARGET_DIR)
	$(info -> building Swift source archive v$(VERSION))
	@($(SWIFT) package archive-source --output $(BINDING_SWIFT_SRC))

test_swift: $(BINDING_RUST)
	$(info -> testing Swift binding v$(VERSION) tests)
	@($(SWIFT) test)

clean_swift:
	$(info -> removing Swift build directory)
	@(rm -rf $(SWIFT_BUILD_DIR))
	$(info -> removing Swift binding files)
	@(rm -rf $(SWIFT_TARGET_DIR))

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Node
# ----------------------------------------------------------------------------

.PHONY: clean_node

NPM := $(MISE) node -- npm
NODE_GYP := $(MISE) node npm:node-gyp npm:node-addon-api -- node-gyp

$(BINDING_NODE): $(ROOT)/binding.gyp $(NODE_BUILD_DIR)/Makefile $(NODE_SRC_DIR)/index.js $(NODE_SRC_DIR)/index.d.ts $(NODE_SRC_DIR)/binding.cc $(ROOT)/node_modules
	$(info -> building Node binding v$(VERSION) into $(BINDING_NODE))
	@($(NODE_GYP) build)

$(NODE_BUILD_DIR)/Makefile: $(ROOT)/binding.gyp
	$(info -> configure Node binding)
	@($(NODE_GYP) configure)

publish_node: $(BINDING_NODE)
	$(info -> publishing Node binding v$(VERSION) to npmjs)
	@($(NPM) publish)

$(ROOT)/node_modules: $(ROOT)/package.json
	$(info -> install Node dependencies from $(ROOT)/package.json)
	@($(NPM) install)

clean_node:
	$(info -> removing Node binding files)
	@(rm -rf $(NODE_BUILD_DIR))
	$(info -> removing Node prebuild files)
	@(rm -rf $(ROOT)/prebuilds)
	$(info -> removing Node local modules)
	@(rm -rf $(ROOT)/node_modules)

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Python
# ----------------------------------------------------------------------------

PIP := $(MISE) python -- pip3
PYPROJECT_BUILD := $(MISE) python -- pyproject-build
PYTHON := $(MISE) python -- python3
TWINE := $(MISE) python -- twine

.PHONY: install_python clean_python

$(BINDING_PYTHON_SDIST): $(PYTHON_SRC_DIR)/binding.c $(PYTHON_SRC_DIR)/__init__.py | $(PYTHON_TARGET_DIR)
	$(info -> building Python source distribution into $(BINDING_PYTHON_SDIST))
	@($(PYTHON) setup.py sdist -d $(PYTHON_TARGET_DIR))

$(BINDING_PYTHON_WHEEL): $(BINDING_PYTHON_SDIST) | $(PYTHON_TARGET_DIR)
	@($(PIP) wheel -w $(PYTHON_TARGET_DIR) -e . )

publish_python: $(BINDING_PYTHON_SDIST) $(BINDING_PYTHON_WHEEL)
	$(info -> uploading Python binding v$(VERSION) to PyPI)
	@($(TWINE) upload --sign --identity $(GPG_SIGNER) --non-interactive $(PYTHON_TARGET_DIR)/*)

clean_python:
	$(info -> removing Python build directory)
	@(rm -rf $(PYTHON_BUILD_DIR))
	$(info -> removing Python dist directory)
	@(rm -rf $(ROOT)/dist)
	$(info -> removing Python binding files)
	@(rm -rf $(PYTHON_TARGET_DIR))
	@(rm -rf $(PYTHON_ROOT_DIR)/tree_sitter_sdml.egg-info)
	$(info -> removing Python top-level cruft)
	@(rm -rf $(ROOT)/.eggs $(ROOT)/.mypy_cache)

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ WASM
# ----------------------------------------------------------------------------

.PHONY: clean_wasm

$(BINDING_WASM): $(PARSER_LIB) $(SRC_DIR)/grammar.json |$(WASM_TARGET_DIR)
	$(info -> building WASM binding v$(VERSION) file into $(BINDING_WASM))
	@($(TS_WASM_CLI) $(TS_BUILD) --wasm --output $(BINDING_WASM))

clean_wasm:
	$(info -> removing WASM binding files)
	@(rm -f $(WASM_TARGET_DIR))

# ----------------------------------------------------------------------------
# Release & Versioning
# ----------------------------------------------------------------------------

#UPDATE_VERSION := $(shell $(SEDCMD) -En 's/(^version[[:space:]]*=[[:space:]]*)("[^"]+")/\1"0.4.21"/' Cargo.toml)

# CHANGES.md
# Cargo.toml
# grammar.js
# package.json
# pyproject.toml
# tree-sitter.json
