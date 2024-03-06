# !/bin/bash

# Create build directory
mkdir -p build
pushd build
cmake ..
make
popd