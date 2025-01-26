//Q6. WAP in C to concat two given strings.
#include <stdio.h>
#include <string.h>

void main(){
     char str1[50], str2[50];
     printf("Input String 1: ");
     fgets(str1,50,stdin);  // Taking 1st String as input

     // Remove the '\n' character added by fgets
    str1[strcspn(str1, "\n")] = '\0';

     printf("Input String 2: ");
     fgets(str2,50,stdin);  // Taking 2nd String as input

     int size1 = strlen(str1);  // Calculating size of string
     int size2 = strlen(str2);

     strcat(str1,str2); // Concatinating both strings

     printf("The concatenated string is: %s\n",str1);
}