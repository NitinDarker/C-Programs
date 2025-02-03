#include <stdio.h>
#include <string.h>

int main(){
     char name1[20], name2[20];
     int salary1, salary2;
     printf("Enter name of 1st employee: ");
     scanf("%s",&name1);
     printf("Enter salary of 1st employee: ");
     scanf("%d",&salary1);
     printf("Enter name of 2nd employee: ");
     scanf("%s",&name2);
     printf("Enter salary of 2nd employee: ");
     scanf("%d",&salary2);

     FILE *f = fopen("output.txt","w");

     fprintf(f,"%s,%d\n",name1,salary1);
     fprintf(f,"%s,%d\n",name2,salary2);

     fclose(f);
     printf("Successfully done!");
     return 0;
}