#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     srand(time(0));
     int number = rand()%100 + 1; // Generates a random number b/w 1 to 100
     printf("%d",number);
     return 0;
}