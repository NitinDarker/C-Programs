#include <stdio.h>
#include <stdlib.h>

struct Node
// Creating a structure for Linked List
{
     int data;
     struct Node *next;
};

void traverse(struct Node *head)
{
     // Declaring a pointer pointing to head of linked list
     struct Node *ptr = head;

     // Traversing the nodes/elements of linked list
     int i = 0;
     while (ptr != NULL)
     {
          i++;
          ptr->data = i;   // Storing data in linked list
          ptr = ptr->next; // Moving the pointer ptr
     }
}

void print(struct Node *head)
{
     // Declaring a pointer pointing to head of linked list
     struct Node *ptr = head;

     while (ptr != NULL)
     {
          // Printing the data stored in linked list
          printf("%d ", ptr->data);
          ptr = ptr->next;
     }
}

struct Node *middleNode(struct Node *head, int numNode)
{
     struct Node *ptr = head;
     if (numNode % 2 != 0)
     {
          for (int i = 0; i < numNode / 2; i++)
          {
               ptr = ptr->next;
          }
          return ptr;
     }
     else
     {
          for (int i = 0; i < numNode / 2; i++)
          {
               ptr = ptr->next;
          }
          return ptr;
     }
}

int main()
{
     // Declaring the nodes of Linked List
     struct Node *head;
     struct Node *two;
     struct Node *three;
     struct Node *four;
     struct Node *five;
     struct Node *six;

     int nodesNum = 6;

     // Allocating dynamic memory in heap for the nodes of linked list
     head = (struct Node *)malloc(sizeof(struct Node));
     two = (struct Node *)malloc(sizeof(struct Node));
     three = (struct Node *)malloc(sizeof(struct Node));
     four = (struct Node *)malloc(sizeof(struct Node));
     five = (struct Node *)malloc(sizeof(struct Node));
     six = (struct Node *)malloc(sizeof(struct Node));

     // Linking the nodes in linked list
     head->next = two;
     two->next = three;
     three->next = four;
     four->next = five;
     five->next = six;
     six->next = NULL;

     traverse(head);
     printf("\nBefore: ");
     print(head);

     head = middleNode(head, nodesNum);

     printf("\nAfter:  ");
     print(head);

     return 0;
}