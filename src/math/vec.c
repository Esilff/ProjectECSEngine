#include "vec.h"
#include <stdlib.h>

void createVector(Vector * vector, int size) {
    vector->size = size;
    vector->components = (float*)malloc(size * sizeof(float));
    for (short i = 0; i < size; i++) {
        vector->components[i] = 0.0f;
    }
}