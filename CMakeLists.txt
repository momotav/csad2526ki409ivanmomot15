cmake_minimum_required(VERSION 3.14)
project(csad2526ki409ivanmomot15)

set(CMAKE_CXX_STANDARD 14)

# Math operations module
add_library(math_operations math_operations.cpp)

# GoogleTest setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Unit tests
add_executable(unit_tests tests/unit_tests.cpp)
target_link_libraries(unit_tests PRIVATE math_operations gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)
