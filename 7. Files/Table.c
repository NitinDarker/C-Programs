#include <stdio.h>
#include <string.h>

int main(){
     int num;
     printf("Enter the number whose table is to generated: ");
     scanf("%d",&num);

     FILE *ptr = fopen("Mul_Table.txt","w");
     for(int i=0; i<10; i++){
          fprintf(ptr,"%d * %d = %d\n",num,i+1,num*(i+1));
     }
     fclose(ptr);

     return 0;
}