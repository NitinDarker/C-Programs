#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strr(char *target, char *source, int index1, int index2)
{

     int i = 0;
     while (i != (index2 - index1) + 1)
     {
          target[i] = source[index1 + i];
          i++;
     }
     target[i] = '\0';
     return target;
}

int main()
{
     char *std;
     printf("Input Standard Time (hh:mm:ssAM/PM):\n");
     scanf("%s",std);

     char *hrs;
     // hrs = strr(hrs, std, 0, 1);
     strcpy(hrs, std);
     printf("%s", hrs);

     // std[8] == '\0';
     return 0;
}