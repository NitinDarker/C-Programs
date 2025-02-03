#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack{
     int size;
     int top;
     char* ar;
}stack;

int isEmpty(stack* s){
     if(s->top < 0){
          return 1;
     }
     return 0;
}

void push(stack* s){
     s->ar[s->top +1] = '(';
     s->top++;
}

void pop(stack* s){
     if(isEmpty(s)){
          printf("Unbalanced Expression!\n");
          exit(1);
     }
     s->top--;
}

int main(){

     char *arr = (char*)malloc(sizeof(char) * 50);
     printf("Input an expression: \n");
     scanf("%s",arr);

     stack *s = (stack*)malloc(sizeof(stack));
     s->size = strlen(arr);
     s->top = -1;
     s->ar = (char*)malloc(sizeof(char) * s->size);

     for(int i=0; arr[i]!='\0'; i++){

          if(arr[i] == '('){
               push(s);
          }
          if(arr[i] == ')'){
               pop(s);
          }
     }

     if(isEmpty(s)){
          printf("Parenthesis Matching!\n");
     }
     else{
          printf("Parenthesis NOT Matching!\n");
     }
}