// WAP in C to print a Matrix.
#include <stdio.h>

int main(){
     int row, column;
     printf("Input the number of rows: ");
     scanf("%d",&row);
     printf("Input the number of columns: ");
     scanf("%d",&column);
     int arr[row][column];
     for(int i=0; i<row; i++){
          for(int j=0; j<column; j++){
               printf("Input element[%d][%d]: ",i+1,j+1);
               scanf("%d",&arr[i][j]);
          }
     }
     printf("\nMatrix:\n");
     for(int i=0; i<row; i++){
          for(int j=0; j<column; j++){
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
     return 0;
}