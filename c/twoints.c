#include <stdio.h>
#include <stdlib.h>

void doit() {
  int z = 23;
  int x = 12;
}

int main() {
  int x = 3; // b
  printf("%i\n",x);
  doit();
  // Declare a pointer to an integer
  // y is a pointer type (int*)
  int *y;
  y = malloc(sizeof(int));
  *y = 7;

  printf("Value I want = %i\n",*y);
  printf("Memory loc = %p\n",y);
  
  
  
}
