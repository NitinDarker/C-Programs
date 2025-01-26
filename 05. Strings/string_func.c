#include <stdio.h>
#include <string.h>

int check(char str[], char ch){
     int bool = 0;
     int count;
     for(int i=0; str[i]!='\0';i++){
          if(str[i]==ch){
               count ++ ;
               printf("%d",count);
          }
     }
     return bool;
}

int frequency(char str[], char ch){
     int count=0;
     for(int i=0; str[i]!='\0'; i++){
          if(str[i]==ch){
               count++;
          }
     }
     return count;
}

int main(){
     char string[50];
     printf("Enter a string: ");
     gets(string);
     char ch;
     printf("Input the character: ");
     scanf("%c",&ch);
     int bool = check(string,ch);
     if(bool == 1){
          printf("Given char %c is present!\n",ch);
     }
     else{
          printf("Given char %c is absent!\n",ch);
     }
     int freq = frequency(string, ch);
     printf("Frequency of char %c is: %d\n", ch, freq);
     return 0;
}