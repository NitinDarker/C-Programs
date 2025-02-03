#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
     int size;
     int top;
     char *ar;
} stack;

int isEmpty(stack *s) {
     if (s->top < 0) {
          return 1;
     }
     return 0;
}

void push(stack *s, char c) {
     s->ar[s->top + 1] = c;
     s->top++;
}

int pop(stack *s, char c) {
     if (isEmpty(s)) {
          printf("Cannot Pop! Stack Empty!\n");
          return 0;
     }
     char pop = s->ar[s->top];
     s->top--;

     if (pop != c) {
          printf("Parenthesis Not Matching!\n");
          return 0;
     }
     return 1;
}

int bracketMatch(char *arr) {
     int match = 1;

     stack *s = (stack *)malloc(sizeof(stack));
     s->size = strlen(arr);
     s->top = -1;
     s->ar = (char *)malloc(sizeof(char) * s->size);

     for (int i = 0; arr[i] != '\0'; i++) {

          if (!match) {
               return 0;
          }

          if (arr[i] == '(') {
               push(s, '(');
          } else if (arr[i] == ')') {
               match = pop(s, '(');
          } else if (arr[i] == '[') {
               push(s, '[');
          } else if (arr[i] == ']') {
               match = pop(s, '[');
          } else if (arr[i] == '{') {
               push(s, '{');
          } else if (arr[i] == '}') {
               match = pop(s, '{');
          }
     }

     if (isEmpty(s)) {
          return 1;
     } else {
          printf("Stack is not Empty!\n");
          return 0;
     }
}

int main() {

     char *arr = (char *)malloc(sizeof(char) * 50);
     printf("Input an expression: \n");
     scanf("%s", arr);

     if (bracketMatch(arr)) {
          printf("Balanced Expression!\n");
     } else {
          printf("Unbalanced Expression!");
     }
     return 0;
}