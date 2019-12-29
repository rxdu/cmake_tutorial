cmake_minimum_required(VERSION 3.0.0)
project(cmake_template)

## Set compiler to use c++ 11 features
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Put all binary files into /bin and libraries into /lib
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

## Optional features
# tests
option(BUILD_TESTS "Choose whether to build test code" FALSE)

## Add source directories
add_subdirectory(src/app)
add_subdirectory(src/image)

if(BUILD_TESTS)
add_subdirectory(unit_tests)
endif()