cmake_minimum_required(VERSION 3.10)
project(hello_world VERSION 1.0 LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Default build type
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# Place binaries in a predictable location
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Create executable from main.cpp
add_executable(hello main.cpp)
target_include_directories(hello PRIVATE ${CMAKE_SOURCE_DIR})
target_compile_features(hello PRIVATE cxx_std_17)

# Useful compiler warnings
if(MSVC)
  target_compile_options(hello PRIVATE /W4 /permissive-)
else()
  target_compile_options(hello PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Installation
install(TARGETS hello RUNTIME DESTINATION bin)

# Optional basic test
option(BUILD_TESTS "Enable building basic tests" ON)
if(BUILD_TESTS)
  enable_testing()
  add_test(NAME HelloRuns COMMAND hello)
endif()