#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

Node *insert(int newValue, Node *list) {
  Node *newNode = malloc(sizeof(Node));
  newNode->value = newValue;
  newNode->next = list;
  return newNode;
}

void display(Node *list) {
  Node *cur = list;
  while (cur != NULL) {
    printf("Value = %i\n",cur->value);
    cur = cur->next;
  }
}

void cleanup(Node *list) {
  Node *cur = list;
  while (cur != NULL) {
    Node *nextNode = cur->next;
    free(cur);
    cur = nextNode;
  }
}
  
int main() {

  Node *head = NULL;
  head = insert(3,head);
  head = insert(5,head);
  display(head);
  cleanup(head);
  /*
  // in 'da stack
  Node node;
  node.value = 3;
  printf("Value is %i\n",node.value);

  // in 'da heap
  Node *other;
  other = malloc(sizeof(Node));
  (*other).value = 3;
  other->value = 3 ;  // this is shorthand for above
  printf("Size of int is %i\n",sizeof(int));*/
}
