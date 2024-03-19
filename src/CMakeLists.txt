set(MODULE_NAME ${PROJECT_NAME})
configure_file(version.h.in version.h)

message(STATUS "=src")

file(GLOB LIB_SRC_FILES
        "utils.cpp"
)

add_library(local_libs ${LIB_SRC_FILES})
add_executable(${MODULE_NAME} main.cpp)

target_include_directories(local_libs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include "${PROJECT_BINARY_DIR}/src")
#target_include_directories(local_libs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(${MODULE_NAME} local_libs)

