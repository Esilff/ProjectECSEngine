#include <stdio.h>
#include "math/vec.h"

int main() {
  printf("Hello world !\n");
  Vector vector;
  createVector(&vector, 2);
  // struct vector * vector;
  // createVector(vector, 2);
  printf("Vector size : %d\n", vector.size);
  return 0;
}