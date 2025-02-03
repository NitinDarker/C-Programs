// Q2. WAP in C to compute the power of any given number using function.
#include <stdio.h>

int power(int num, int exp){
    int ans = 1; //Initialising answer = 1

    for(int i=0; i<exp; i++){
        //Loop runs exp no. of times where exp is exponent/power
        ans *= num;
        //Multiplying number exp times to answer
    }
    return ans; //Returning the answer
}

int main(){
    int num, pow;

    printf("\nEnter a number: \n");
    scanf("%d",&num);

    printf("Enter power: \n");
    scanf("%d",&pow);

    printf("\n%d^(%d) = %d\n\n",num,pow,power(num,pow));

    return 0;
}
