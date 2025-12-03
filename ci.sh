#!/usr/bin/env bash
set -euo pipefail

# Create build directory
mkdir -p build

# Navigate into the build directory
cd build

# Configure the project using CMake
cmake ..

# Build the project
cmake --build .

# Run tests using CTest
ctest --output-on-failure
