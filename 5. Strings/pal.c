#include <stdio.h>
#include <string.h>

int main(){
	
	// int num;
	// printf("Input a number: \n");
	// scanf("%d", &num);
	
	// int reverse = 0;
	// int forward = num, digit;
	
	// while(forward != 0){
	// 	digit = forward%10;
	// 	reverse = (reverse*10)+digit;
	// 	forward /= 10;
	// }
	
	// if(num == reverse){
	// 	printf("It is a palindrome number.\n");
	// }
	// else{
	// 	printf("it is not a palindrome number.\n");
	// }
	
	
	char num[10];
	printf("Input a number: \n");
	scanf("%s", num);
	
	int size = strlen(num);
	int pal = 1;
	
	for(int i=0; i<=size/2; i++){
		if(num[i] != num[size-i-1]){
			pal = 0;
			break;
		}
	}
	
	if(pal){
		printf("It is a palindrome number.\n");
	}
	else{
		printf("it is not a palindrome number.\n");
	}
	
	return 0;
}