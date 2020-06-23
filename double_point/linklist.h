#include <stdlib.h>
#include <stdio.h>

typedef struct LinkNode {
    int data;
    LinkNode *next;
} LinkList;

LinkNode* init(int values[], int size);

LinkNode* get(int i);

int add(LinkNode *node);

int del(LinkNode *node);

void traverse(LinkList *head);
