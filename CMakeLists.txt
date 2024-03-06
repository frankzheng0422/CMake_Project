cmake_minimum_required(VERSION 3.1)
project (sample_project VERSION 1.0.0 LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 14)
set (CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install)

# Debug
message(STATUS "PROJECT_NAME: " ${PROJECT_NAME})
message(STATUS "PROJECT_VERSION: " ${PROJECT_VERSION})
message(STATUS "CMAKE_BINARY_DIR: " ${CMAKE_BINARY_DIR})
message(STATUS "CMAKE_INSTALL_PREFIX: " ${CMAKE_INSTALL_PREFIX})

add_subdirectory(src)
add_subdirectory(external)
add_subdirectory(test)

