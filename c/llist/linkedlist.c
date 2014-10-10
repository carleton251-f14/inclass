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
  
