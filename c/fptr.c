#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int multiply(int x, int y) {
  return x * y;
}

//(define doit
// (lambda (f x y)
//  (f x y)))

int doit(int (*f)(int,int), int x, int y) {
  return (*f)(x,y);
}

int main() {
  printf("%i\n",doit(add,3,5));
  printf("%i\n",doit(multiply,3,5));
}
