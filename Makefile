# ----------------------------------------------------------------------------
# Directories
# ----------------------------------------------------------------------------

ROOT := $(PWD)

SRC_DIR := $(ROOT)/src
TST_DIR := $(ROOT)/test

BUILD_DIR := $(ROOT)/build

BINDING_DIR := $(ROOT)/bindings

NODE_SRC_DIR := $(BINDING_DIR)/node
NODE_BUILD_DIR := $(BUILD_DIR)

RUST_SRC_DIR := $(BINDING_DIR)/rust
RUST_BUILD_DIR := $(ROOT)/target

INSTALL_ROOT_DIR ?= /usr/local
INSTALL_LIB_DIR := $(INSTALL_ROOT_DIR)/lib
INSTALL_INCLUDE_DIR := $(INSTALL_ROOT_DIR)/include

# ----------------------------------------------------------------------------
# Tools
# ----------------------------------------------------------------------------

PATH := $(ROOT)/node_modules/.bin:$(PATH)

TS_CLI := tree-sitter
TS_GENERATE_ABI ?=latest
TS_GENERATE := generate --abi=$(TS_GENERATE_ABI)
TS_TEST := test

# ----------------------------------------------------------------------------
# Build Kind
# ----------------------------------------------------------------------------

BUILD_KIND ?= debug

ifeq ($(BUILD_KIND), 'debug')
	TS_TEST_FLAGS := -dD0
endif

ifeq ($(BUILD_KIND), 'release')
	TS_TEST_FLAGS :=
endif

DYLIB_EXT := dylib

# ----------------------------------------------------------------------------
# Targets
# ----------------------------------------------------------------------------

BASE_NAME := $(shell basename $(ROOT))
BASE_NAME_US := $(subst -,_,$(BASE_NAME))

SHORT_NAME := $(shell echo $(BASE_NAME) | cut -d '-' -f 3)

PARSER_LIB := lib$(BASE_NAME).$(DYLIB_EXT)
PARSER := $(BUILD_DIR)/$(PARSER_LIB)

NODE_BUILD_KIND := $(shell echo $(BUILD_KIND) | sed 's/.*/\u&/')

BINDING_NODE_LIB := $(BASE_NAME_US)_binding.node
BINDING_NODE := $(NODE_BUILD_DIR)/$(NODE_BUILD_KIND)/$(BINDING_NODE_LIB)

BINDING_RUST_LIB := lib$(BASE_NAME_US).rlib
BINDING_RUST := $(RUST_BUILD_DIR)/$(BUILD_KIND)/$(BINDING_RUST_LIB)

BINDING_WASM_LIB := $(BASENAME).wasm
BINDING_WASM := $(ROOT)/$(BINDING_WASM_LIB)

ALL_BINDINGS := $(BINDING_NODE) $(BINDING_RUST) $(BINDING_WASM)

# ----------------------------------------------------------------------------
# Start Here
# ----------------------------------------------------------------------------

build: build_grammar build_parser $(ALL_BINDINGS)

test: test_grammar test_rust

install: install_parser install_rust

publish: publish_rust publish_npm

.PHONY: clean
clean:
	rm -rf $(NODE_BUILD_DIR)
	rm -rf $(RUST_BUILD_DIR)
	rm $(BINDING_WASM)

# ----------------------------------------------------------------------------
# Build: Grammar
# ----------------------------------------------------------------------------

# The default is  $(SHORT_NAME)
FILE_EXT := sdm

build_grammar: $(SRC_DIR)/grammar.json $(SRC_DIR)/node-types.json $(SRC_DIR)/parser.c

$(SRC_DIR)/grammar.json: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

$(SRC_DIR)/node-types.json: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

$(SRC_DIR)/parser.c: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

test_grammar: test_grammar_clean $(SRC_DIR)/grammar.json
	$(TS_CLI) $(TS_TEST) $(TS_TEST_FLAGS)
	$(TS_CLI) parse examples/*.sdm --quiet --time

.PHONY: test_grammar_clean
test_grammar_clean:
	rm -f $(TST_DIR)/corpus/*.$(FILE_EXT)~ $(TST_DIR)/corpus/.*.\~undo-tree\~ && \
    rm -f $(TST_DIR)/highlight/*.$(FILE_EXT)~ $(TST_DIR)/highlight/.*.\~undo-tree\~

# ----------------------------------------------------------------------------
# Build: Library
# ----------------------------------------------------------------------------

IN_SRC_FILES = parser.c
SRC_FILES = $(addprefix $(SRC_DIR)/, $(IN_SRC_FILES))
OBJ_FILES = $(addprefix $(BUILD_DIR)/, $(IN_SRC_FILES:.c=.o))
INCLUDE_DIR := $(SRC_DIR)/tree_sitter

CFLAGS ?= -O3 -Wall -Wextra
CFLAGS += -I$(SRC_DIR)
LDFLAGS += -dynamiclib

build_parser: $(PARSER)

$(PARSER): $(OBJ_FILES)
	echo $(OBJ_FILES)
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

install_parser: $(INSTALL_LIB_DIR)/$(PARSER) $(INSTALL_INCLUDE_DIR)/tree_sitter/parser.h

$(INSTALL_LIB_DIR)/$(PARSER): $(PARSER)
	install -d '$(INSTALL_LIB_DIR)'
	install -m755 '$(PARSER)' '$(INSTALL_LIB_DIR)'/'$(PARSER)'

$(INSTALL_INCLUDE_DIR)/tree_sitter/parser.h: $(SRC_DIR)/tree_sitter/parser.h
	install -d '$(INSTALL_INCLUDE_DIR)'/tree_sitter
	install '$(SRC_DIR)'/'$(INCLUDE_DIR)'/parser.h '$(INSTALL_INCLUDE_DIR)'/'$(INCLUDE_DIR)'/parser.h

# ----------------------------------------------------------------------------
# Build: Bindings
# ----------------------------------------------------------------------------

$(BINDING_RUST): $(PARSER) $(RUST_SRC_DIR)/build.rs
	cargo build $(CARGO_FLAGS)

test_rust: $(BINDING_RUST)
	cargo test

install_rust: $(BINDING_RUST)
	cargo install --path '.' --locked

publish_rust: $(BINDING_RUST)
	cargo publish --allow-dirty

$(BINDING_NODE): $(PARSER) $(ROOT)/binding.gyp $(NODE_SRC_DIR)/index.js $(NODE_SRC_DIR)/binding.cc
	node-gyp configure
	node-gyp build

publish_npm: $(BINDING_NODE)
	npm publish

$(BINDING_WASM): $(PARSER) $(SRC_DIR)/grammar.json
	$(TS_CLI) build-wasm

# ----------------------------------------------------------------------------
# Setup
# ----------------------------------------------------------------------------

INSTALLER=brew
INSTALL_CMD=$(INSTALLER) install

setup: node npm emscripten

.PHONY: node
node:
	$(INSTALL_CMD) node

.PHONY: npm
npm:
	$(INSTALL_CMD) npm

.PHONY: emscripten
emscripten:
	$(INSTALL_CMD) emscripten

