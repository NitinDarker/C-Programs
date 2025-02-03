// Q4. WAP in c to check whether a number is a prime number or not.
#include <stdio.h>

int check_prime(int n){ //This func returns 1 if it's prime, 0 otherwise.

    for(int i=2; i<n; i++){
        if(n%i == 0) //Checking every iteration between 1 and number itself
        return 0; //If any iteration is divisible to our number, return 0
    }
    return 1;//If loop runs successfully/ No divisible num found, return 1
}

int main(){
    int num;
    printf("Enter a number greater than 1:\n");
    scanf("%d",&num); //Entering the number

    int bool = check_prime(num); //Storing the answer as boolean (0 or 1)

    if(bool)
    printf("\n%d is a prime number.\n",num); //If check_prime = 1
    else
    printf("\n%d is not a prime number.\n",num); //If check_prime = 0

    return 0;
}