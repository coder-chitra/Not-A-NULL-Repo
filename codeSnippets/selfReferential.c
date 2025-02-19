#include <stdio.h>
#include <stdlib.h>

// Define a self-referential structure
struct Node 
{
    int data;
    struct Node *next; // Self-referential pointer
};

int main() 
{
    // Creating nodes dynamically
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    // Assigning values
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL; // Last node should point to NULL

    // Traversing the linked list
    struct Node *temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
