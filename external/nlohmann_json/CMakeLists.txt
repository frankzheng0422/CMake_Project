# nlohmann json vars

message(STATUS "=nlohmann json")

set(JSON_LIB_VERSION        v3.11.3)
set(JSON_PRJ_NAME           json)
set(JSON_INSTALL_DIR_PATH   ${CMAKE_INSTALL_PREFIX})
set(JSON_INC_DIR_PATH       ${CMAKE_INSTALL_PREFIX}/include/${JSON_PRJ_NAME})

## check nlohmann json inc dir
unset(JSON_INCLUDE_DIR CACHE)
find_path(JSON_INCLUDE_DIR
        NAMES "nlohmann"
        PATHS "${JSON_INC_DIR_PATH}")

message(STATUS "JSON_INC_DIR_PATH: " ${JSON_INC_DIR_PATH})
message(STATUS "include => ${JSON_INCLUDE_DIR}")

if(NOT JSON_INCLUDE_DIR)
    # json header/lib dirs not found
    include(ExternalProject)
    ExternalProject_Add(${JSON_PRJ_NAME}
        GIT_REPOSITORY          https://github.com/nlohmann/json.git
        GIT_TAG                 ${JSON_LIB_VERSION}
        SOURCE_DIR              ${CMAKE_BINARY_DIR}/${JSON_PRJ_NAME}
        CMAKE_ARGS              -DCMAKE_INSTALL_PREFIX=${JSON_INSTALL_DIR_PATH} -DJSON_BuildTests=Off
        INSTALL_DIR             ${JSON_INSTALL_DIR_PATH}
    )
    # dependencies
    add_dependencies(${PROJECT_NAME} ${JSON_PRJ_NAME})
endif()