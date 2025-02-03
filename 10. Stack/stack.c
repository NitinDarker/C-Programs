#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
     int top;
     int size;
     int *arr;
} stack;

int isEmpty(stack *s)
{
     if (s->top < 0)
     {
          return 1;
     }
     return 0;
}

int isFull(stack *s)
{
     if (s->top == s->size - 1)
     {
          return 1;
     }
     return 0;
}

int pop(stack *s)
{
     if (isEmpty(s))
     {
          printf("Stack Underflow!\n");
          return -1;
     }
     return s->arr[s->top--];
}

void push(stack *s, int a)
{
     if (isFull(s))
     {
          printf("Stack Overflow!\n");
          return;
     }
     s->arr[++s->top] = a;
}

int main()
{
     stack *s = (stack *)malloc(sizeof(stack));
     s->arr = (int *)malloc(sizeof(int) * s->size);
     s->top = -1;
     s->size = 5;

     push(s, 5);
     push(s, 5);
     push(s, 5);
     push(s, 5);
     push(s, 5);
     push(s, 5);
     pop(s);

     if (isEmpty(s))
     {
          printf("Stack is empty\n");
     }
     else if (isFull(s))
     {
          printf("Stack is Full\n");
     }
     else
     {
          printf("Stack is neither empty nor full!");
     }

     return 0;
}