#ifndef FILE_H
#define FILE_H
#include <stdio.h>

struct file {
    const char* name;
    FILE* file;
};

typedef struct file File;

#endif