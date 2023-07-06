cmake_minimum_required(VERSION 3.12)

project(ProjectECS-Engine VERSION 0.0.0)

set(EXECUTABLE_NAME "${PROJECT_NAME}-${PROJECT_VERSION}")

file(WRITE "${CMAKE_BINARY_DIR}/project_name.txt" "${EXECUTABLE_NAME}/${PROJECT_NAME}")


add_subdirectory(src)

add_executable(${PROJECT_NAME} main.c)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} PRIVATE math debug)
