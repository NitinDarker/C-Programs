#include <stdio.h>
#include <string.h>
struct employee{
     int code;
     char name[50];
     float salary;
};

int main(){
     struct employee e1, e2;
     printf("Enter your name: ");
     fgets(e1.name,50,stdin);
     printf("Enter your code: ");
     scanf("%d",e1.code);
     e1.salary = 1000000;
     printf("Hi! %sYour salary is %.2f",e1.name,e1.salary);
     return 0;
}