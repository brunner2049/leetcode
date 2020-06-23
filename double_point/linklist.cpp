#include "linklist.h"

LinkNode*
init(int values[], int size)
{
    LinkNode *head = (LinkNode *)malloc(sizeof(LinkNode));
    head->next = NULL;

    for(int i=0; i<size; ++i)
    {
        LinkNode *node = (LinkNode *)malloc(sizeof(LinkNode));
        node->data = values[i];

        node->next = head->next;
        head->next = node;
    }

    return head;
}

void
traverse(LinkList *head)
{
    LinkNode *node = head->next;
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


int
main(int argc, char* argv[])
{
    int values[] = {1, 2, 3, 4, 5, 6};

    LinkList *head = init(values, 6);

    traverse(head);

    return 0;
}
