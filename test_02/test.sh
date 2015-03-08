#!/bin/bash

# Compile with:
# mkdir build
# cd build
# cmake ..
# make
# cd ..

# Default test:
echo "8 24 3 20 1 17" | build/test_02
echo "7 21 3 42 3 7" | build/test_02

