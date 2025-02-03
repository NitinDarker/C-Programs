//Q10. WAP in c to sort the array elements in ascending order.
#include <stdio.h>

int main(){
     int arr[] = {45,42,26,41,66,44,89,102,44,55,99}; //Declaring an unsorted array

     int size = sizeof(arr)/sizeof(arr[0]); //Calculating the size of unsorted array

     int temp;  //Declaring a temporary variable

     for(int i=0; i<size; i++){
          for(int j=i+1; j<size; j++){
               if(arr[i]>arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               } //Sorting the array using nested loops
          }
     }
     printf("\nSorted Array: ");
     for(int i=0; i<size; i++){
          printf("%d ",arr[i]);
     }
     printf("\n");
     return 0;
}