#ifndef LIST_H_
#define LIST_H_
#define HEADER -1
#include <stdlib.h>
#include <stdio.h>

typedef struct NODE{
    int value;
    struct NODE *nxt;
}NODE;
typedef struct LIST{
    NODE *head;

}LIST;


NODE *createNode();
LIST *createList();

int appendNode(LIST *tgt, NODE *appendValue);
void freeNode(NODE **tgt);
void freeList(LIST **tgt);
#endif
