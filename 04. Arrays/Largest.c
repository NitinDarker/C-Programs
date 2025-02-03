// Program to calculate the largest element in an array
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *num = (int*) malloc(10 * sizeof(int));
	int *ptr = num;
	
	printf("Enter 10 numbers to store in array: \n");
	
	for(int i=0; i<10; i++){
		scanf("%d", num);
		num++;
	}
	
	int largest = 0; // Does not account for negative integers
	// int largest = *ptr;
	
	for(int i=0; i<10; i++){
		if(largest < *ptr){
			largest = *ptr;
		}
		ptr++;
	}
	
	printf("Largest number: %d\n",largest);
	return 0;
}