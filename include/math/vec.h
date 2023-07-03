#ifndef VECTOR_H
#define VECTOR_H

struct vector {
    int size;
    float * components;
};

typedef struct vector Vector;

void createVector(Vector * vector, int size);

#endif