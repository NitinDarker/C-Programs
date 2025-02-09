//1. WAP in C to compute the sum of n natural numbers using recursion.
#include <stdio.h>

int sum(int n){

     if(n == 0){
          return 0; //Base condition for recursion
     }
     else{
          return n + sum(n-1); //Recursive call of sum function
     }
}

int main(){
     int n;

     printf("\nEnter the value of n: \n");
     scanf("%d",&n);

     if(n<0){ //Only positive integers are allowed
          printf("Enter a positive natural number!\n"); 
     }
     else{ //Calling the sum function
          printf("The value of first %d natural numbers = %d\n",n,sum(n));
     }
     return 0;
}

