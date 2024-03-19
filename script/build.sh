# !/bin/bash

# Create build directory
rm -rf build
mkdir -p build
pushd build
cmake ..
make
popd
