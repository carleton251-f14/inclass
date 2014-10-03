#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 3;
  printf("%i\n",x);

  // Declare a pointer to an integer
  // y is a pointer type (int*)
  int *y;
  y = malloc(sizeof(int));
  *y = 7;

  printf("Value I want = %i\n",*y);
  printf("Memory loc = %p\n",y);
  
  
  
}
