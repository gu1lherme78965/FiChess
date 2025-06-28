cmake_minimum_required(VERSION 3.10)
project(FiChes LANGUAGES CXX)

# Specifies the output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Creates the executable and enforces the C++17 standard
add_executable(FiChess src/main.cpp)
target_compile_features(FiChes PRIVATE cxx_std_17)