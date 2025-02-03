// 2. WAP in C to store complex numbers and design functions to calculate sum,
//    subtraction and multiplication of two complex numbers.

#include <stdio.h>

typedef struct Complex_Num
{ //Structure for a complex number

     int real, imag; 
     //Structure includes real and imaginary part of complex no.
} com;

com sum(com a, com b) //Function to sum complex numbers
{
     com s;
     s.real = a.real + b.real;
     s.imag = a.imag + b.imag;

     return s;
}

com sub(com a, com b) //Function to subtract complex numbers
{
     com s;
     s.real = a.real - b.real;
     s.imag = a.imag - b.imag;

     return s;
}

com mul(com a, com b) //Function to multiply complex numbers
{
     com m;
     // ex: (1+2i)(3+4i) = (1*3 - 2*4) + i(1*4 + 2*3)
     m.real = (a.real * b.real) - (a.imag * b.imag);
     m.imag = (a.real * b.imag) + (a.imag * b.real);

     return m;
}
void main()
{
     com c1, c2, addition, difference, product;

     printf("\nEnter the first complex number\n(real imaginary): ");
     scanf("%d %d", &c1.real, &c1.imag);

     printf("\nEnter the second complex number\n(real imaginary): ");
     scanf("%d %d", &c2.real, &c2.imag);

     // Function calls to perform operations
     addition = sum(c1, c2);
     difference = sub(c1, c2);
     product = mul(c1, c2);

     printf("\nComplex Num 1: %d + %di \n",c1.real,c1.imag);
     printf("Complex Num 2: %d + %di \n\n",c2.real,c2.imag);
     printf("Sum: %d + %di\n", addition.real, addition.imag);
     printf("Difference: %d + %di\n", difference.real, difference.imag);
     printf("Product: %d + %di\n", product.real, product.imag);
}

