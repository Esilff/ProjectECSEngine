#include <stdio.h>
#include "math/vec.h"
#include "logger/logger.h"

int main() {
  printf("Hello world !\n");
  Vector vector;
  createVector(&vector, 2);
  Logger logger = getLogger();
  logger.log("Everything works well apparently ?", LOG);
  logger.log("I don't know why I should warn you ?..", WARNING);
  logger.log("This is not a true error, I hope you know ?", ERROR);
  // struct vector * vector;
  // createVector(vector, 2);
  printf("Vector size : %d\n", vector.size);
  return 0;
}