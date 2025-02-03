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

     ptr = head;

     // Printing the data stored in linked list
     while (ptr != NULL)
     {
          printf("%d ", ptr->data);
          ptr = ptr->next;
     }
}

struct Node *deletionFirstNode(struct Node *head)
{                                   // Deleting the head node
     struct Node *ptr = head->next; // Pointing ptr to second node
     free(head);                    // Freeing the head node from heap memory
     return ptr;                    // Returning ptr as a head node
}

void deletionNodeInBetween(struct Node *head, int index)
{ // Deleting the node at index
     struct Node *ptr = head;

     for (int i = 0; i < index - 1; i++)
     {
          ptr = ptr->next; // Pointing ptr to one node before deletion
     }

     struct Node *q = ptr->next; // Pointing q to node that is to be deleted
     ptr->next = q->next;
     free(q); // Freeing the node from heap memory
}

//TODO:
void deletionNodeWithValue(struct Node *head, int data)
{ // Deleting the node having data
     struct Node *ptr = head;
     struct Node *q = ptr->next;

     while (data != q->data && q->next!=NULL)
     {
          ptr = ptr->next;
          q = q->next;
     }

     ptr->next = q->next;
     free(q);
}

void deletionLastNode(struct Node *head)
{
     struct Node *ptr = head;
     struct Node *q = (struct Node *)malloc(sizeof(struct Node *));

     q->next = ptr;
     while (ptr->next != NULL)
     {
          ptr = ptr->next;
          q = q->next;
     }
     q->next = NULL;
     free(ptr);
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
     printf("\nBefore Deletion: ");
     print(head);

     // head = deletionFirstNode(head); //Passing head node and storing the second node to head node
     // deletionNodeInBetween(head, 1);
     // deletionLastNode(head);
     deletionNodeWithValue(head, 2);

     printf("\nAfter Deletion:  ");
     print(head);

     return 0;
}