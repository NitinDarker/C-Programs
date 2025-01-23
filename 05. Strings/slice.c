#include <stdio.h>

void slice(char *str, int m, int n){
     int i;
     for(i=0; m!=n+1 ;i++,m++){
          str[i] = str[m-1];
     }
     str[i]='\0';
     
}
int main(){
     int m,n;
     char str[] = "Abcdefg";
     printf("Original String: %s\n",str);
     printf("Positions      : ");
     for(int i=1;i<sizeof(str);i++){
     printf("%d",i);
     }
     printf("\nEnter the positions where you want to slice the string-\n");
     printf("Enter start position: ");
     scanf("%d",&m);
     printf("Enter end position: ");
     scanf("%d",&n);
     slice(str,m,n);
     printf("Sliced String: %s",str);
     return 0;
}