#include <stdlib.h>
struct node {
    int elem;
    struct node *next;
};

void foo(struct node *n) {
    if (n == NULL) return;
    printf("%d\n", n->elem);
    foo(n->next);
}

void bar(struct node *n) {
    if (n == NULL) return;
    bar(n->next);
    printf("%d\n", n->elem);
}