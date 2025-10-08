# ----------------------------------------------------------------------------
# Config Names
# ----------------------------------------------------------------------------

ROOT := $(PWD)

BASE_NAME := $(shell basename $(ROOT))
BASE_NAME_US := $(subst -,_,$(BASE_NAME))
SHORT_NAME := $(shell echo $(BASE_NAME) | cut -d '-' -f 3)

FILE_EXT := sdm

# ----------------------------------------------------------------------------
# Config ❯ Directories
# ----------------------------------------------------------------------------

SRC_DIR := $(ROOT)/src
TST_DIR := $(ROOT)/test

BUILD_DIR := $(ROOT)/build

BINDING_DIR := $(ROOT)/bindings

NODE_SRC_DIR := $(BINDING_DIR)/node
NODE_BUILD_DIR := $(BUILD_DIR)

PYTHON_ROOT_DIR := $(BINDING_DIR)/python
PYTHON_SRC_DIR := $(PYTHON_ROOT_DIR)/$(BASE_NAME_US)
PYTHON_BUILD_DIR := $(BUILD_DIR)
PYTHON_DIST_DIR := $(ROOT)/dist

RUST_SRC_DIR := $(BINDING_DIR)/rust
RUST_TARGET_DIR := $(BUILD_DIR)/target

INSTALL_ROOT_DIR ?= /usr/local
INSTALL_LIB_DIR := $(INSTALL_ROOT_DIR)/lib
INSTALL_INCLUDE_DIR := $(INSTALL_ROOT_DIR)/include

# ----------------------------------------------------------------------------
# Config ❯ Tools
# ----------------------------------------------------------------------------

TS_CLI := tree-sitter
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
    UNAME_S := $(shell uname -s)

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

BINDING_PYTHON_SDIST := $(shell python3 $(PYTHON_ROOT_DIR)/dist_name.py source)
BINDING_PYTHON_WHEEL := $(shell python3 $(PYTHON_ROOT_DIR)/dist_name.py wheel)

BINDING_RUST_LIB := lib$(BASE_NAME_US).rlib
BINDING_RUST := $(RUST_TARGET_DIR)/$(BUILD_KIND)/$(BINDING_RUST_LIB)

BINDING_WASM_LIB := $(BASE_NAME).wasm
BINDING_WASM := $(BUILD_DIR)/$(BINDING_WASM_LIB)

ALL_BINDINGS := $(BINDING_NODE) $(BINDING_RUST) $(BINDING_WASM)
#  FIXME:       $(BINDING_PYTHON_SDIST) $(BINDING_PYTHON_WHEEL)

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
	$(info -> building parser library into $(PARSER_LIB))
	@($(TS_CLI) $(TS_BUILD) -o $(PARSER_LIB))

install_parser: $(INSTALL_LIB_DIR)/$(PARSER_LIB_FILE) $(INSTALL_INCLUDE_DIR)/parser.h

$(INSTALL_LIB_DIR)/$(PARSER_LIB_FILE): $(PARSER_LIB)
	$(info -> installing parser library into $(INSTALL_LIB_DIR))
	@(install -d $(INSTALL_LIB_DIR))
	@(install -m755 $(PARSER_LIB) $(INSTALL_LIB_DIR)/$(PARSER_LIB_FILE))

$(INSTALL_INCLUDE_DIR)/parser.h: $(INCLUDE_DIR)/parser.h
	$(info -> installing parser headers into $(INSTALL_INCLUDE_DIR))
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
	$(info -> installing Emacs binding into $(EMACS_BINDING))
	@(cp $(PARSER_LIB) $(EMACS_BINDING))

generate_for_emacs:
	$(info -> generating Emacs binding)
	$(TS_CLI) generate --abi=$(EMACS_ABI)

# ----------------------------------------------------------------------------
# Build ❯ Bindings
# ----------------------------------------------------------------------------

build_bindings: $(ALL_BINDINGS)

test_bindings: test_rust

install_bindings: install_rust install_python

publish_bindings: publish_rust publish_node publish_python

clean_bindings: clean_rust clean_node clean_wasm clean_python

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Rust
# ----------------------------------------------------------------------------

.PHONY: clean_rust

CARGO_FLAGS :=

$(BINDING_RUST): $(PARSER_LIB) $(RUST_SRC_DIR)/build.rs
	$(info -> building Rust binding into $(BINDING_RUST))
	@(cargo build $(RUST_BUILD_MODE) --target-dir $(RUST_TARGET_DIR))

test_rust: $(BINDING_RUST)
	$(info -> running Rust binding tests)
	@(cargo test $(RUST_BUILD_MODE) --target-dir $(RUST_TARGET_DIR))

install_rust: $(BINDING_RUST)
	$(info -> installing Rust binding locally)
	@(cargo install --path '.' --locked --target-dir $(RUST_TARGET_DIR))

publish_rust: $(BINDING_RUST)
	$(info -> publishing Rust binding to crates.io)
	@(cargo publish --allow-dirty --target-dir $(RUST_TARGET_DIR))

clean_rust:
	$(info -> removing Rust binding files)
	@(rm -rf $(RUST_TARGET_DIR))

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Node
# ----------------------------------------------------------------------------

.PHONY: clean_node

$(BINDING_NODE): $(ROOT)/binding.gyp $(NODE_BUILD_DIR)/Makefile $(NODE_SRC_DIR)/index.js $(NODE_SRC_DIR)/index.d.ts $(NODE_SRC_DIR)/binding.cc $(ROOT)/node_modules
	$(info -> building Node binding into $(BINDING_NODE))
	@(node-gyp build)

$(NODE_BUILD_DIR)/Makefile: $(ROOT)/binding.gyp
	$(info -> configure Node binding)
	@(node-gyp configure)

publish_node: $(BINDING_NODE)
	$(info -> publishing Node binding to npmjs)
	@(npm publish)

$(ROOT)/node_modules: $(ROOT)/package.json
	$(info -> install Node dependencies from $(ROOT)/package.json)
	@(npm install)

clean_node:
	$(info -> removing Node binding files)
	@(rm -rf $(NODE_BUILD_DIR))
	$(info -> removing Node local modules)
	@(rm -rf $(ROOT)/node_modules)

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ Python
# ----------------------------------------------------------------------------

PYTHON_VENV=dev
VENV_DIR=$(ROOT)/$(PYTHON_VENV)
VENV_BIN=$(VENV_DIR)/bin
VENV_BUILD=$(VENV_BIN)/pyproject-build
VENV_PYTHON=$(VENV_BIN)/python3
VENV_PIP=$(VENV_BIN)/pip3

.PHONY: install_python clean_python $(VENV_DIR)

$(BINDING_PYTHON_SDIST): $(PYTHON_SRC_DIR)/binding.c $(PYTHON_SRC_DIR)/__init__.py $(VENV_BUILD)
	$(info -> building Python source distribution into $(BINDING_PYTHON_SDIST))
	@($(VENV_BUILD))

$(BINDING_PYTHON_WHEEL): $(BINDING_PYTHON_SDIST)

$(VENV_BUILD): $(VENV_DIR)
	$(info -> setup Python build tool)
	@($(VENV_PIP) install build)

$(VENV_DIR):
	$(info -> creating virtual environment in $(VENV_DIR))
	@(python3 -m venv $(PYTHON_VENV))

install_python:
	$(info -> installing Python binding into local venv)
	@($(VENV_PIP) install -e .)

publish_python: $(BINDING_PYTHON_SDIST) $(BINDING_PYTHON_WHEEL)
	$(info -> uploading Python binding to PyPI)
	@(twine upload --sign --identity $(GPG_SIGNER) --non-interactive $(PYTHON_DIST_DIR)/*)

clean_python:
	$(info -> removing Python binding files)
	@(rm -rf $(ROOT)/dist)
	@(rm -rf $(PYTHON_ROOT_DIR)/tree_sitter_sdml.egg-info)
	$(info -> removing Python virtual environment)
	@(rm -rf $(ROOT)/$(PYTHON_VENV))
	$(info -> removing Python top-level cruft)
	@(rm -rf $(ROOT)/.eggs $(ROOT)/.mypy_cache)

# ----------------------------------------------------------------------------
# Build ❯ Bindings ❯ WASM
# ----------------------------------------------------------------------------

.PHONY: clean_wasm

$(BINDING_WASM): $(PARSER_LIB) $(SRC_DIR)/grammar.json | $(BUILD_DIR)
	$(info -> building WASM binding file into $(BINDING_WASM))
	@($(TS_CLI) $(TS_BUILD) --wasm --output $(BINDING_WASM))

clean_wasm:
	$(info -> removing WASM binding file)
	@(rm -f $(BINDING_WASM))

# ----------------------------------------------------------------------------
# Setup
# ----------------------------------------------------------------------------

INSTALLER=brew
INSTALL_CMD=$(INSTALLER) install

.PHONY: node npm emscripten twine

setup: setup_node setup_npm setup_emscripten setup_twine

CMD_NODE := $(shell command -v node 2> /dev/null)
setup_node: $(CMD_NODE)
	$(info -> installing node)
	@($(INSTALL_CMD) node)

CMD_NPM := $(shell command -v npm 2> /dev/null)
setup_npm: $(CMD_NPM)
	$(info -> installing npm)
	@($(INSTALL_CMD) npm)

CMD_EMSCRIPTEN := $(shell command -v emscripten 2> /dev/null)
setup_emscripten: $(CMD_EMSCRIPTEN)
	$(info -> installing emscripten)
	@($(INSTALL_CMD) emscripten)

CMD_TWINE := $(shell command -v twine 2> /dev/null)
setup_twine: $(CMD_TWINE)
	$(info -> installing twine)
	@($(INSTALL_CMD) twine)
