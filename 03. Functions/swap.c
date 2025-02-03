// Q3. WAP in C to swap two numbers using the functions

#include <stdio.h>

void swap(int *a, int *b){ //Passing pointers as arguments in func
    int temp = *a; //Creating a temporary variable
    *a = *b;  //Swapping the value stored in pointer address
    *b = temp;
}

int main(){
    int num1, num2;

    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("\nBefore swapping: \nnum1 = %d \nnum2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("\nAfter swapping: \nnum1 = %d \nnum2 = %d\n", num1, num2);

    return 0;
}


