#include <stdio.h>
#include <stdlib.h>

//Single node in the linkedlist below
struct node 
{
    int item;
    struct node *next;
};

int main ()
{
    struct node node;
    struct node *node_ptr1;
    struct node *node_ptr2;

    node_ptr1 = &node;
    node_ptr2 = malloc(sizeof(struct node));

    node.item = 10;
    node_ptr1->next = node_ptr2;

    node_ptr2->item = 15;
    node_ptr2->next = NULL;

    return 0;
}
