#!/bin/bash

emcc \
  -o output.js *.c \
  -s WASM=1 -s ONLY_MY_CODE=1 -s EXPORTED_FUNCTIONS="['_myFunction','_main','_board_step','_board_count','_board_init','_board_ref']"
