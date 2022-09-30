add_subdirectory(material)

set(EXEC_NAME main)
add_executable(${EXEC_NAME} main.cpp)
target_link_libraries(${EXEC_NAME} fatigueMaterialSN)
target_include_directories(${EXEC_NAME} PUBLIC material)
