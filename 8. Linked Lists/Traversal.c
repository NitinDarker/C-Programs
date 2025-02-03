#include <stdio.h>
#include <stdlib.h>

// Creating a structure for Linked List
struct Node
{
     int data;
     struct Node *next;
};

void traverse(struct Node *head)
{
     // Declaring a pointer pointing to head of linked list
     struct Node *ptr = head;

     // Traversing the nodes/elements of linked list
     for (int i = 1; i < 5; i++)
     {
          ptr->data = i;   // Storing data in linked list
          ptr = ptr->next; // Moving the pointer ptr
     }
}

void print(struct Node *head)
{
     // Declaring a pointer pointing to head of linked list
     struct Node *ptr = head;

     // Printing the data stored in linked list
     ptr = head;

     while (ptr != NULL)
     {
          printf("%d ", ptr->data);
          ptr = ptr->next;
     }
}
int main()
{
     // Declaring the nodes of Linked List
     struct Node *head;
     struct Node *two;
     struct Node *three;
     struct Node *four;

     // Allocating dynamic memory in heap for the nodes of linked list
     head = (struct Node *)malloc(sizeof(struct Node));
     two = (struct Node *)malloc(sizeof(struct Node));
     three = (struct Node *)malloc(sizeof(struct Node));
     four = (struct Node *)malloc(sizeof(struct Node));

     // Linking the nodes in linked list
     head->next = two;
     two->next = three;
     three->next = four;
     four->next = NULL;

     traverse(head);
     print(head);

     return 0;
}