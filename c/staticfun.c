#include <stdio.h>

void playground() {
  static int x = 0;
  x = x + 1;
  printf("x = %i\n",x);
}

int main() {
  playground();
  playground();
  playground();
  printf("x = %i\n",x);

}
