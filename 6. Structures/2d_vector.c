#include <stdio.h>
#include <string.h>

typedef struct vector{
     int x;
     int y;
} vector;

vector sumvector(vector v1,vector v2){
     vector sum;
     sum.x = v1.x + v2.x;
     sum.y = v1.y + v2.y;
     return sum;
}

int main(){
     vector b = {5,10};
     vector c = {2,2};
     printf("b(x,y) = (%d,%d)\n",b.x,b.y);
     printf("c(x,y) = (%d,%d)\n",c.x,c.y);
     vector sum = sumvector(b,c);
     printf("Sum(x,y) = (%d,%d)\n",sum.x,sum.y);
     return 0;
}