cmake_minimum_required(VERSION 3.3)
project(unit_test)

set(CMAKE_CXX_STANDARD 11)

include_directories(${GTEST_ROOT}/include)
link_directories(${GTEST_ROOT}/lib)

file(GLOB_RECURSE TEST_SRCS *.cpp)
add_executable(${PROJECT_NAME} ${TEST_SRCS})
target_link_libraries(${PROJECT_NAME} PUBLIC pthread gtest fatigueMaterial)
