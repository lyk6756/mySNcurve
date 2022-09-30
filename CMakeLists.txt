cmake_minimum_required(VERSION 3.3)
project(mySNcurve)

set(CMAKE_CXX_STANDARD 11)

set(GTEST_ROOT "/Users/liyukun/miniconda3/envs/sncurve")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_subdirectory(src)
add_subdirectory(test)
