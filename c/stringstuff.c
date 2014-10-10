#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  printf("%s\n","Hello world\n");

  // Low level approach I don't recommend,
  // but it makes the point
  char mytext[10];
  mytext[0] = 'c';
  mytext[1] = 'a';
  mytext[2] = 't';
  mytext[3] = '\0';  // null character
  printf("%s\n",mytext);

  // char *strptr = "hi there";
  //strptr[0] = 'b';  // ugh no good
  //char myword[8]; // leave room for null
  char *myword = malloc(sizeof(char)*8);
  strcpy(myword,"hi there");
  myword[0] = 'b';
  printf("%s\n",myword);
  free(myword);
}
