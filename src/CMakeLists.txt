add_library(math math/vec.c)
target_include_directories(math PRIVATE ${PROJECT_SOURCE_DIR}/include/math)

add_library(debug debug/debug.c)
target_include_directories(debug PRIVATE ${PROJECT_SOURCE_DIR}/include/debug)