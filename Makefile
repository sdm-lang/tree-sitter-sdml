# ----------------------------------------------------------------------------
# Directories
# ----------------------------------------------------------------------------

ROOT := $(shell pwd)

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

BASE_NAME := $(shell basename $(PWD))
BASE_NAME_US := $(subst -,_,$(BASE_NAME))

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

all: grammar parser_dylib bindings

parser_dylib: $(PARSER)

bindings: $(ALL_BINDINGS)

.PHONY: clean
clean:
	rm -rf $(NODE_BUILD_DIR)
	rm -rf $(RUST_BUILD_DIR)
	rm $(BINDING_WASM)

.PHONY: nothing
nothing:
	echo $(BASE_NAME) $(PARSER)

# ----------------------------------------------------------------------------
# Build: Grammar
# ----------------------------------------------------------------------------

grammar: grammar_test

grammar_test: grammar_test_clean $(SRC_DIR)/grammar.json
	$(TS_CLI) $(TS_TEST) $(TS_TEST_FLAGS)

.PHONY: clean_tests
grammar_test_clean:
	rm -f $(TST_DIR)/corpus/*.txt\~ $(TST_DIR)/corpus/.*.\~undo-tree\~ && \
    rm -f $(TST_DIR)/highlight/*.smithy~ $(TST_DIR)/highlight/.*.\~undo-tree\~

$(SRC_DIR)/grammar.json: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

$(SRC_DIR)/node-types.json: $(ROOT)/grammar.js
	$(TS_CLI) $(TS_GENERATE)

# ----------------------------------------------------------------------------
# Build: Library
# ----------------------------------------------------------------------------

IN_SRC_FILES := parser.c
SRC_FILES = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ_FILES = $(addprefix $(BUILD_DIR)/, $(IN_SRC_FILES:.c=.o))
INCLUDE_DIR := $(SRC_DIR)/tree_sitter

CFLAGS ?= -O3 -Wall -Wextra
CFLAGS += -I$(SRC_DIR)
LDFLAGS += -dynamiclib

$(PARSER): $(OBJ_FILES)
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

$(INSTALL_LIB_DIR)/$(PARSER): $(PARSER)
	install -d '$(INSTALL_LIB_DIR)'
	install -m755 '$(PARSER)' '$(INSTALL_LIB_DIR)'/'$(PARSER)'

$(INSTALL_INCLUDE_DIR)/tree_sitter/parser.h: $(SRC_DIR)/tree_sitter/parser.h
	install -d '$(INSTALL_INCLUDE_DIR)'/tree_sitter
	install '$(SRC_DIR)'/'$(INCLUDE_DIR)'/parser.h '$(INSTALL_INCLUDE_DIR)'/'$(INCLUDE_DIR)'/parser.h

# ----------------------------------------------------------------------------
# Build: Bindings
# ----------------------------------------------------------------------------

$(BINDING_RUST): $(RUST_SRC_DIR)/build.rs $(RUST_SRC_DIR)/lib.rs $(SRC_DIR)/node-types.json
	cargo build $(CARGO_FLAGS)

$(BINDING_NODE): $(ROOT)/binding.gyp $(NODE_SRC_DIR)/index.js $(NODE_SRC_DIR)/binding.cc $(SRC_DIR)/node-types.json
	node-gyp configure && \
	node-gyp build

$(BINDING_WASM): $(SRC_DIR)/grammar.json
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

