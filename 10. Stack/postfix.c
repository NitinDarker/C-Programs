#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack
{ // Defining a stack of characters
     int size;
     int top;
     char *arr;
} stack;

int isEmpty(stack *s)
{ // Function to check if a stack is empty or not
     if (s->top < 0)
     {
          return 1;
     } // Return 1 if stack->top = -1
     return 0;
}

int pCheck(stack *s, char op)
{ // Function to check if a operator can be pushed into stack
     if ((op == '*' || op == '/') && (s->arr[s->top] == '+' || s->arr[s->top] == '-'))
     { // If precedence of op > precedence of stackTop
          return 1;
     }
     else if (isEmpty(s))
     {
          return 1;
     }
     return 0;
}

void push(stack *s, char c)
{ // Function to push a character into stack
     s->arr[s->top + 1] = c;
     s->top++;
}

int pop(stack *s)
{ // Function to pop a character from stack
     int val = s->arr[s->top];
     s->top--;
     return val;
     // It returns the popped character
}

char *postfix(char *exp)
{ // Function to convert infix exp to postfix exp
     stack *s = (stack *)malloc(sizeof(stack));
     s->top = -1;
     s->size = strlen(exp);
     s->arr = (char *)malloc(sizeof(char) * s->size);
     // Initialising a stack

     char *p = (char *)malloc(sizeof(char) * (strlen(exp) + 1));
     // Declaring an char array to store postfix exp

     int j = 0;                           // j takes count of filling of postfix exp
     for (int i = 0; exp[i] != '\0'; i++) // i takes count of index of infix exp
     {
          if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
          { // If exp[i] is an operator
               if (pCheck(s, exp[i]))
               {
                    push(s, exp[i]);
               }
               else
               {
                    // TODO: while()
                    p[j] = pop(s);
                    j++;

                    // // Checking of second iteration (optional)
                    // if (pCheck(s, exp[i]))
                    // {
                    //      push(s, exp[i]);
                    // }
                    // else
                    // {
                    //      p[j] = pop(s);
                    //      j++;

                    //      // Checking of third iteration (optional)
                    //      if (pCheck(s, exp[i]))
                    //      {
                    //           push(s, exp[i]);
                    //      }
                    //      else
                    //      {
                    //           p[j] = pop(s);
                    //           j++;
                    //      }
                    // }
               }
          }
          else // If exp[i] is NOT an operator
          {
               p[j] = exp[i];
               j++;
          }
     }
     while (!isEmpty(s))
     { // Emptying the remaining stack
          p[j] = pop(s);
          j++;
     } // Stack should be empty in the end.
     p[j] = '\0';
     return p;
}

int main()
{
     char *exp = "x-y/z-k*d"; // Given Infix Expression

     printf("%s\n", postfix(exp));
     // Infix to Postfix conversion
     return 0;
}