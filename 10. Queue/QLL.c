#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{
     int data;
     struct LinkedList *next;
} node;

typedef struct Queue{
     node *f;
     node *r;
} queue;

int isEmpty(queue *q){
     if(q->f == NULL){
          return 1;
     }
     return 0;
}

int isFull(queue *q){
     node* n = (node*) malloc(sizeof(node));
     if(n == NULL){
          return 1;
     }
     return 0;
}

void enqueue(queue *q, int data){

     if(isFull(q)){
          printf("Cannot Enqueue in a full queue!\n");
          return;
     }

     node *newNode = (node*) malloc(sizeof(node));
     newNode->data = data;
     newNode->next = NULL;

     if(isEmpty(q)){
          q->f = newNode;
          q->r = newNode;
          return;
     }

     q->r->next = newNode;
     q->r = newNode;
}

int dequeue(queue *q){

     if(isEmpty(q)){
          printf("Cannot Dequeue in an empty queue! ");
          return -1;
     }

     int val = q->f->data;
     q->f = q->f->next;
     return val;
}

void traverse(queue *q){

     if(isEmpty(q)){
          printf("Empty Queue!\n");
          return;
     }
     for(node *p = q->f; p!=NULL; p=p->next){
          printf("%d ",p->data);
     }
     printf("\n");
}

int main(){
     queue *q = (queue*) malloc (sizeof(queue));
     q->f = NULL;
     q->r = NULL;
     enqueue(q, 5);
     enqueue(q, 6);
     enqueue(q, 7);
     enqueue(q, 8);
     enqueue(q, 9);
     enqueue(q, 10);
     traverse(q);
     printf("Dequeue: %d\n",dequeue(q));
     printf("Dequeue: %d\n",dequeue(q));
     printf("Dequeue: %d\n",dequeue(q));
     traverse(q);

     return 0;
}