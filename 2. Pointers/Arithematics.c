#include <stdio.h>

int main()
{
     // int a = 5;
     // int b = 10;
     // int *ptr = &a;
     // int *p2 = &b;
     // printf("ptr = %u\n",ptr);
     // printf("ptrr = %u\n",ptrr);
     // printf("&ptr = %d\n",&ptr);
     // printf("&ptrr = %d\n",&ptrr);
     // ptr++;
     // printf("ptr++ = %u\n",ptr);
     // printf("ptr+2 = %u\n",ptr+2);
     // printf("ptr = %u\n",ptr);
     // printf("ptr++ = %u\n",ptr++);
     // ++ptr;
     // printf("++ptr = %u\n",ptr);
     // printf("++ptr = %u\n",++ptr);
     // printf("ptr = %u\n",ptr);
     // ptr--;
     // printf("ptr = %u\n",ptr--);
     // printf("ptr-- = %u\n",ptr);
     // printf("ptr-2 = %u\n",ptr-2);
     // printf("ptr = %u\n",ptr);
     int arr[5] = {0, 1, 2, 3, 4};
     int *ptr1 = &arr[1];
     // int *ptr2 = &arr[4];
     // printf("%d", 2 [arr]);

     int a[5] = {0, 1, 2, 3, 4};
     int *p[] = {a, a+1, a+2, a+3, a+4};
     printf("%d\n",&a);
     printf("%d\n",&p);
     printf("%d %d %d", p, *p ,*(*p));
     // int *ptr3 = arr+4;
     // printf("%d\n",ptr2);
     // printf("%d\n",ptr3);
     // printf("%d\n",ptr2 - ptr1);
     // printf("%d\n",ptr1);
     // printf("%d",ptr1+10);
     // printf("ptr1 = %u\n",ptr1);
     // printf("ptr1 = %u\n",&arr[0]);
     // printf("ptr2 = %u\n",&arr[1]);
     // printf("ptr2 = %u\n",&arr[2]);
     // printf("ptr2 = %u\n",arr[3]);
     // ptr++;
     // printf("++ptr = %u\n",ptr);
     // printf("arr = %d\n",arr);
     // printf("ptr+2 = %u\n",ptr+2);
     // printf("ptr = %u\n",ptr);
     return 0;
}