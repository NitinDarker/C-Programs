#include <stdio.h>
#include <stdlib.h>

struct Node{
     int data;
     struct Node* next;
};

struct stack{
     struct Node* top;
};

int isFull(struct stack* s){
     struct Node* p = (struct Node*)malloc(sizeof(struct Node));
     if(p == NULL){
          return 1;
     }
     return 0;
}

int isEmpty(struct stack* s){
     if(s->top == NULL){
          return 1;
     }
     return 0;
}

int stackTop(struct stack* s){
     if(isEmpty(s)){
          printf("Stack Underflow!\n");
          return -1;
     }
     return s->top->data;
}

int stackBottom(struct stack*s){
     if(isEmpty(s)){
          printf("Stack Underflow!\n");
          return -1;
     }

     struct Node* ptr = s->top;

     while(ptr->next != NULL){
          ptr = ptr->next;
     }
     return ptr->data;
}

void push(struct stack* s, struct Node* node){
     if(isFull(s)){
          printf("Stack Overflow!\n");
          return;
     }

     node->next = s->top;
     s->top = node;
}

int pop(struct stack*s){
     if(isEmpty(s)){
          printf("Stack Underflow!\nError: ");
          return -1;
     }

     int val = s->top->data;
     s->top = s->top->next;
     return val;
}

int peek(struct stack* s){
     if(isEmpty(s)){
          printf("Cannot Peek!\nError: ");
          return -1;
     }
     return s->top->data;
}

int main(){
     struct Node *first = (struct Node*)malloc(sizeof(struct Node));
     struct Node *second = (struct Node*)malloc(sizeof(struct Node));
     struct Node *third = (struct Node*)malloc(sizeof(struct Node));
     struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));
     struct Node *fifth = (struct Node*)malloc(sizeof(struct Node));

     first->data = 10;
     second->data = 1;
     third->data = 2;
     fourth->data = 3;
     fifth->data = 4;

     // first->next = second;
     // second->next = third;
     // third->next = fourth;
     // fourth->next = fifth;
     // fifth->next = NULL;

     struct stack* s = (struct stack*)malloc(sizeof(struct stack));
     s->top = NULL;

     printf("Empty: %d\n",isEmpty(s));
     printf("Full: %d\n",isFull(s));

     push(s,first);
     push(s,second);
     push(s,third);
     push(s,fourth);
     push(s,fifth);

     printf("stackBottom: %d\n",stackBottom(s));
     printf("stackTop: %d\n",stackTop(s));

     // for(int i=0; i<6; i++){
     //      printf("Popping: %d\n",pop(s));
     //      printf("Peeking: %d\n",peek(s));
     // }
     return 0;
}