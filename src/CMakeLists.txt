add_library(math math/vec.c)
target_include_directories(math PRIVATE ${PROJECT_SOURCE_DIR}/include/math)

add_library(logger logger/logger.c)
target_include_directories(logger PRIVATE ${PROJECT_SOURCE_DIR}/include/logger)

add_library(filesystem filesystem/filesystem.c)
target_include_directories(filesystem PRIVATE ${PROJECT_SOURCE_DIR}/include/filesystem)