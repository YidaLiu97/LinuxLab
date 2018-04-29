/**
 Demonstration of creating and traversing a linked list
 in C.
 
 */

#include <stdio.h>
#include <stdlib.h>

// the elements in the list
struct element {
    int data;
    struct element *next;
};

// a pointer to the head of the list
struct element *head;

// a temporary pointer used for freeing memory
struct element *temp;

int main(void)
{
    int n = 5;
    struct element *node;

    // malloc allocates the memory to hold a struct element
    node = (struct element *) malloc(sizeof(struct element));
    head = node;

    while (n > 0)
    {
        // populate the list
        node->data = n;
        node->next = (struct element *) malloc(sizeof(struct element));

        node = node->next;

        n--;
    }

    node->next = NULL;

    // traverse the list
    while (head->next != NULL)
    {
        printf("%d\n",head->data);

        // free memory after visiting a node        
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
