#include <stdio.h>
#include <stdlib.h>

typedef struct Circular_Queue{
     // Structure to implement a Circular Queue
     int *arr; // Circular Array Queue
     int size; // Size of the queue
     int f;    // Queue starts from index: f+1
     int r;    // Queue ends at index: r
} queue;

int isEmpty(queue *q){
     // Function to check if queue is Empty
     if (q->f == q->r){
          printf("Queue is Empty!\n");
          return 1;
     }
     return 0;
}

int isFull(queue *q){
     // Function to check if queue is Full
     if (q->f == ((q->r + 1) % q->size)){
          printf("Queue is Full!\n");
          return 1;
     }
     return 0;
}

void enqueue(queue *q, int val){
     // Function to enqueue an element in a queue
     if (isFull(q)){
          printf("Cannot enqueue in a full queue!\n");
          return;
     }
     q->r = (q->r + 1) % q->size; // Circular Incrementing the rear index
     q->arr[q->r] = val;
}

int dequeue(queue *q){
     // Function to dequeue an element from a queue
     if (isEmpty(q)){
          printf("Cannot dequeue from an empty queue!\n");
          return -1;
     }
     q->f = (q->f + 1) % q->size; // Circular Incrementing the front index
     return q->arr[q->f];         // Queue starts from index: f+1
}

void printArray(queue *q){
     // Function to print all the elements in a queue
     if (isEmpty(q)){
          printf("Cannot print from an empty queue!\n");
          return;
     }
     printf("Printing elements of the queue: ");
     int i = (q->f + 1) % q->size;      // Initialising the counter index = f+1 (circularly)
     while (i != (q->r + 1) % q->size){ // Condition for Counter index <= r (circularly)
          printf("%d ", q->arr[i]);
          i = ((i + 1) % q->size);      // Circularly incrementing the counter index
     }
     printf("\n");
}

int main(){
//TODO:
     queue *q = (queue *)malloc(sizeof(queue));
     q->size = 5; // Actual size of queue = size-1
     q->f = 0;   // Initialising front index = 0
     q->r = 0;   // Initialising rear index = 0
     q->arr = (int *)malloc(sizeof(int) * q->size);

     enqueue(q, 5);
     enqueue(q, 6);
     enqueue(q, 7);
     enqueue(q, 8);
     enqueue(q, 9);
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));
     printArray(q);
     enqueue(q, 1);
     enqueue(q, 2);
     printf("Dequeue: %d\n", dequeue(q));
     printArray(q);
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));
     printf("Dequeue: %d\n", dequeue(q));

     return 0;
}