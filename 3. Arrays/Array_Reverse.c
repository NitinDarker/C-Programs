// WAP in C to reverse an array
#include <stdio.h>
void reverse_array(int arr[],int n);
void print_array(int arr[],int n);

int main(){
     int arr[5]={0,1,2,3,4};
     int size = 5;
     printf("Original Array: ");
     print_array(arr,size);
     reverse_array(arr,size);
     printf("Reversed Array: ");
     print_array(arr,size);
     // int arr2[10]={0,1,2,3,4,5,6,7,8,9};
     // size = 10;
     // printf("Original Array: ");
     // print_array(arr2,size);
     // reverse_array(arr2,size);
     // printf("Reversed Array: ");
     // print_array(arr2,size);
     return 0;
}
void reverse_array(int arr[],int n){
     for(int i=0; i<n/2; i++){
          int t = arr[i];
          arr[i] = arr [n-i-1];
          arr [n-i-1] = t;
     }
}
void print_array(int arr[], int n){
     for(int i=0; i<n; i++){
          printf("%d ",arr[i]);
     }
     printf("\n");
}