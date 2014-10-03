#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 10;
  long numbers[length];

  for (int i=0; i < length; i++) {
    numbers[i] = random();
    printf("%li\n",numbers[i]);
  }

  for (int i=0; i < length-1; i++) {
    for (int j=0; j < length-1; j++) {
      if (numbers[j] > numbers[j+1]) {
	long temp = numbers[j];
	numbers[j] = numbers[j+1];
	numbers[j+1] = temp;
      }
    }
  }

  printf("\n");
  for (int i=0; i < length; i++) {
    printf("%li\n",numbers[i]);
  }

  // Location 11?
  printf("\n");
  printf("%li\n",numbers[10]);

  int x;
  int y;
  printf("I am %i\n",x);
  printf("I am %i\n",y);

}
