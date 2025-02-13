#include <stdio.h>
#include <string.h>

int our_strlen(char *arr){
     int i=0;
     // For Loop
     // for(i=0; arr[i]!='\0';i++){
     // }
     // return i;

     //While loop
     while(arr[i]!='\0'){
          i++;
     }
     return i;
}
int main(){
     // char *string1;
     // printf("Input a String: ");
     // gets(string1);
     char string1[]="Nitin Sharma made this program";
     int size = strlen(string1);
     printf("By library strlen function: %d\n",size);
     int x = our_strlen(string1);
     printf("By user created strlen function: %d\n",x);
     
     return 0;
}