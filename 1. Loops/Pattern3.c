// Pattern 3
#include<stdio.h>
void main(){
    int rows;
	int num = 1;
    printf("Enter the number of Rows: ");
    scanf("%d",&rows);
    int spaces = (rows*2)-2;
	printf("\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<spaces; j++){
            printf(" ");
        }
        for(int k=0; k<(2*i)+1; k++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
        spaces-=2;
    }
}