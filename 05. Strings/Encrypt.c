#include <stdio.h>
#include <string.h>

int main(){
     char *str;
     printf("Enter a String to Encrypt: ");
     gets(str);
     int size = strlen(str);
     int strnum[size+1];
     for(int i=0; i<size; i++){
          strnum[i]=str[i];
          strnum[i]++;
          str[i]=strnum[i];
     }
     printf("Encrypted String: "),
     puts(str);
     return 0;
}