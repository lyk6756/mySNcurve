add_library(fatigueMaterial STATIC
        standardSN.cpp)
target_include_directories(fatigueMaterial PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
