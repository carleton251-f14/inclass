#include <stdio.h>
#include <stdlib.h>

void doit() {
  int z = 23;
  int x = 12;
  //printf("z: %ui\n",(unsigned int)&z);
  printf("z: %p\n",&z);
}

int main() {
  int x = 3; // b
  //printf("x: %ui\n",(unsigned int)&x);
  printf("x: %p\n",&x);
  doit();

  int *a;
  a = malloc(sizeof(int));
  // mem address contained in a, i.e.
  // what a points to
  printf("a: %p\n",a);

  // mem address where a is, i.e,
  // where in the stack it is
  printf("a: %p\n",&a);

  // Put something in that spot
  // in the heap
  *a = 42;
  printf("a: %i\n",*a);
  printf("ummmm: %i\n",a[12]);
}
