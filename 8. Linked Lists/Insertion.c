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
     while (ptr != NULL)
     {
          printf("%d ", ptr->data);
          ptr = ptr->next;
     }
}

struct Node *insertionAt_beginning(struct Node *head, int data)
{ // Creating a new head to insert at the beginning
     struct Node *new_head = (struct Node *)malloc(sizeof(struct Node));
     new_head->data = data; // Storing data in new head
     new_head->next = head; // Linking new head to old head
     return new_head;
}

void insertion_in_between(struct Node *head, int data, int index)
{ // Inserting a new node at index and shifting all nodes to its right
     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node *));
     struct Node *ptr = head;

     for (int i = 0; i < index - 1; i++)
     {
          ptr = ptr->next;
     }
     new_node->next = ptr->next;
     ptr->next = new_node;

     new_node->data = data; // Storing data in new head
}

void insertionAtEnd(struct Node *head, int data)
{
     struct Node *endNode = (struct Node *)malloc(sizeof(struct Node *));
     struct Node *ptr = head;

     while (ptr->next != NULL)
     {
          ptr = ptr->next;
     }
     ptr->next = endNode;
     endNode->next = NULL;
     endNode->data = data;
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

     traverse(head); // Traversing the Linked List and setting the data in it
     printf("\nBefore Insertion: ");
     print(head);

     // struct Node* new_head = insertion_at_beginning(head,8);
     // insertion_in_between(head, 9, 2);
     insertionAtEnd(head, 7);

     printf("\nAfter Insertion:  ");
     print(head);

     return 0;
}