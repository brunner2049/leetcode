#include <stdio.h>

typedef struct LinkNode {
    int data;
    LinkNode *next;
} LinkList;

LinkList *head;

LinkList init(int node[]);

LinkNode get(int i);

int add(LinkNode *node);

int del(LinkNode *node);
