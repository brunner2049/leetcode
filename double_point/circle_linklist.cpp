#include "linklist.h"

bool
has_circle(LinkNode *head)
{
    LinkNode *slow = head;
    LinkNode *fast = head;

    while(fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            return true;
    }

    return false;
}

int
main(int argc, char *argv[])
{
    int values[] = {1, 2, 3, 4, 5, 6};

    LinkList *head = init(values, 6);
    //LinkList *head = NULL;
    bool circle = has_circle(head);

    printf("linklist has circle:%d\n", circle);

    return 0;
}
