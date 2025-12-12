@echo off
setlocal enabledelayedexpansion

REM Create build directory
if not exist build mkdir build

REM Navigate into the build directory
cd /d build

REM Configure the project using CMake
cmake ..

REM Build the project
cmake --build .

REM Run tests using CTest
ctest --output-on-failure

exit /b %ERRORLEVEL%
