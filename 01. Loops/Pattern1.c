// Pattern 1
#include <stdio.h>
void main(){
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(int i=rows; i>0; i--){
		for(int j=1; j<=i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
