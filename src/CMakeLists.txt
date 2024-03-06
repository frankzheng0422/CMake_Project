set(MODULE_NAME ${PROJECT_NAME})
message(STATUS "=src" ${MODULE_NAME})

file(GLOB LIB_SRC_FILES
        "utils.cpp"
)

add_library(local_libs ${LIB_SRC_FILES})
add_executable(${MODULE_NAME} main.cpp)

target_include_directories(local_libs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(${MODULE_NAME} local_libs)

