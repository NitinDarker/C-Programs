// 3. WAP in c to swap two complex numbers using the functions
#include <stdio.h>

typedef struct Complex_Num  // Structure for a complex number
{
     int real, imag; // Structure includes real and imaginary part of complex no.
} com;

void swap(com *num1, com *num2) //Using call by reference
{
     com temp;  //Creating a temporary variable for swapping

     temp.real = num1->real; // -> == Arrow operator(- >)
     num1->real = num2->real;
     num2->real = temp.real;

     temp.imag = num1->imag;
     num1->imag = num2->imag;
     num2->imag = temp.imag;
}
int main()
{
     com c1, c2;
     printf("\nEnter the first complex number\n(real imaginary): ");
     scanf("%d %d", &c1.real, &c1.imag);

     printf("\nEnter the second complex number\n(real imaginary): ");
     scanf("%d %d", &c2.real, &c2.imag);

     printf("\nBefore swapping:\n");
     printf("  c1 = %d + %di \n", c1.real, c1.imag);
     printf("  c2 = %d + %di \n", c2.real, c2.imag);
     
     swap(&c1, &c2); // Pass addresses of c1 and c2 to swapComplex function

     printf("\nAfter swapping:\n");
     printf("  c1 = %d + %di \n", c1.real, c1.imag);
     printf("  c2 = %d + %di \n", c2.real, c2.imag);
     return 0;
}