//Q1. WAP in C to compute the factorial of a number using function.
#include <stdio.h>

int fact(int num){

    int f = 1; //Initializing factorial = 1

    for(int i=1; i<=num; i++){
     f *= i;
     //Multiplying every iteration of i until num to factorial
    }

    return f;
}

int main(){

    int num;
    printf("\nEnter a number: \n");
    scanf("%d",&num); //Input a number to calculate factorial

    printf("Factorial of %d = %d\n",num,fact(num));
    // Printing the factorial of that number

    return 0;
}

