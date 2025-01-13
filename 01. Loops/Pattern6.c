// pattern 6
#include <stdio.h>
void main(){
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            if(j%2==0){printf("1");}
            else{printf("0");}
        }
        printf("\n");
    }
}
