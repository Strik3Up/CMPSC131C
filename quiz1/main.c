// Author: 
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include "quiz1.h"

int main(void) {
  char* z = readline("Enter an integer: ");
  char* bas3 = readline("Enter a base: ");
  int z;
  int bas3;
  int f = quiz1(z, bas3);
  printf("answer is %d.",f);
}
