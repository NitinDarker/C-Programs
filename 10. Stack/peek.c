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

int peek(stack *s, int i)
{
     if (i < 0 || i > s->top)
     {
          printf("Cannot peek!\n");
          return -1;
     }
     return s->arr[s->top - i];
}

int main()
{
     stack *s = (stack *)malloc(sizeof(stack));
     s->arr = (int *)malloc(sizeof(int) * s->size);
     s->top = -1;
     s->size = 5;

     push(s, 1);
     push(s, 2);
     push(s, 3);
     push(s, 4);
     push(s, 5);

     printf("Our Stack: \n");
     for (int i = 0; i <= s->top; i++)
     {
          printf("%d\n", peek(s, i));
     }

     return 0;
}