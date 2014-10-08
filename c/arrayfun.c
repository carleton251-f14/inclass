#include <stdio.h>
#include <stdlib.h>

int main() {
  // Create an array in the stack
  int x[5];
  x[0] = 9;
  x[1] = 12;
  printf("a value is %i\n",x[1]);
  printf("x[0] is %i\n",x[0]);
  printf("x[0] is %i\n",*x);

  // Create an array in the heap
  int *y;
  y = malloc(sizeof(int)*5);
  y[0] = 15;
  y[1] = 773;
  printf("another value is %i\n",y[0]);
  free(y);
  
}
