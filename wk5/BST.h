#ifndef BST_H
#define BST_H

#include <stdbool.h>

typedef struct BSTree *BSTree;

// Creates a new empty bst
BSTree BSTNew(void);

// Frees memory allocated to the bst
void BSTFree(BSTree t);

// Inserts an element into the bst
// O(log n)
void BSTInsert(BSTree t, int elem);

// Deletes an element from the bst
// O(log n)
void BSTDelete(BSTree t, int elem);

// Returns true if the given element is in the bst, and false otherwise
// O(log n)
bool BSTSearch(BSTree t, int elem);

// Returns the number of elements in the bst
int BSTSize(BSTree t);

#endif
