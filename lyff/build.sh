#!/bin/bash

emcc \
  -s WASM=1 -s ONLY_MY_CODE=1 -s EXPORTED_FUNCTIONS="['_myFunction']" \
  -g2 -O3 \
  -o output.js *.c
