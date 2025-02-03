#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
     // Structure to implement a queue
     int *arr; // Linear Array Queue
     int size; // Size of the queue
     int f;    // Queue starts from index: f+1
     int r;    // Queue ends at index: r
} queue;

int isFull(queue *q){
     // Function to check if queue is Full
     if (q->r == q->size - 1){
          printf("Queue is Full!\n");
          return 1;
     }
     return 0;
}

int isEmpty(queue *q){
     // Function to check if queue is Empty
     if (q->r == q->f){
          printf("Queue is Empty!\n");
          return 1;
     }
     return 0;
}

void enqueue(queue *q, int val){
     // Function to enqueue an element in a queue
     if (isFull(q)){
          printf("Cannot enqueue in a full Queue!\n");
          return;
     }
     q->r++; // Incrementing the rear index
     q->arr[q->r] = val;
     return;
}

int dequeue(queue *q){
     // Function to dequeue an element in a queue
     if (isEmpty(q)){
          printf("Cannot dequeue in an empty queue!\n");
          return -1;
     }
     q->f++; // Incrementing the front index (shortening the queue)
     return q->arr[q->f]; // Queue starts from index: f+1
}

void printArray(queue *q){
     // Function to print all the elements in a queue
     if (isEmpty(q)){
          printf("Cannot Print!\n");
          return;
     }
     printf("Printing Queue array: ");
     for (int i = q->f + 1; i <= q->r; i++){
          printf("%d ", q->arr[i]);
     }
     printf("\n");
}

int main(){

     queue *q = (queue *)malloc(sizeof(queue));
     q->r = -1;   // Initialising rear index = -1
     q->f = -1;   // Initialising front index = -1
     q->size = 5; // Inputting the size of queue
     q->arr = (int *)malloc(sizeof(int) * q->size);

     enqueue(q, 5);
     enqueue(q, 6);
     enqueue(q, 7);
     enqueue(q, 8);
     enqueue(q, 9);
     printf("%d\n", dequeue(q));
     printf("%d\n", dequeue(q));
     printArray(q);
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));
     printArray(q);  // This demonstrates the problem with linear queue
     enqueue(q, 10); // It can be rectified when using circular queue

     return 0;
}