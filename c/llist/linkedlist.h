// Compiler directives -- include guard
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "linkedlisthelper.h"

// Saying "struct Node" repeatedly gets old,
// so let's abbreviate
typedef     struct Node     Node;

// Just have definitions of functions, no code
Node *insert(int newValue, Node *list);
void display(Node *list);
void cleanup(Node *list);

#endif
