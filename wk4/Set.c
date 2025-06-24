#include "Set.h"
#include <stdlib.h>

struct node {
    int elem;
    struct node *next;
};

struct set {
    struct node *head;
};

// Creates a new empty set
Set SetNew(void) {
    Set new = malloc(sizeof(struct set));
    new->head = NULL;

    return new;
}

// Frees memory allocated to the set
void SetFree(Set s) {}

// Inserts an element into the set
void SetInsert(Set s, int elem) {
    if (SetContains(s, elem)) return;

    struct node *newNode = malloc(sizeof(struct node));
    newNode->elem = elem;
    newNode->next = s->head;
    s->head = newNode;
}

// Deletes an element from the set
void SetDelete(Set s, int elem) {}

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem) {}

// Returns the number of elements in the set
int SetSize(Set s) {}