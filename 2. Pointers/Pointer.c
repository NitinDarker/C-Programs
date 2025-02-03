//Q6. WAP in C to arrange address in the array of pointers in ascending order of the respective integer at the addresses.
#include <stdio.h>

int main() {
     int num[5]; // Creating an array of 5 numbers
     int *ptr[5]; // Creating an array of pointers

     for(int i=0; i<5; i++){
          printf("Number %d: ",i+1);
          scanf("%d",&num[i]); // Inputting the elements of array
          ptr[i] = &num[i]; 
          // Storing the addresses of elements in pointer array
     }
     int temp;
     // Sorting array in ascending order using pointers
     for(int i=0; i<5; i++){
          for(int j=i+1; j<5; j++){
               if(*ptr[i]>*ptr[j]){
               temp = *ptr[i];
               *ptr[i] = *ptr[j];
               *ptr[j] = temp;
               }
          }
     }
     for(int i=0; i<5; i++){
          printf("Address of %d (*ptr[%d]) = %u\n",num[i],i+1,ptr[i]);
          // Printing the address stored in pointer array after sorting
     }

     return 0;
}
