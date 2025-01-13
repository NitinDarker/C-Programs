// Pattern 4
#include <stdio.h>
void main(){
    for(int i=0; i<6; i++){
        for(int spaces=5; spaces>i; spaces--){
            printf(" ");
        }
        for(int k=1; k<=(2*i)+1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=5; i>0; i--){
        for(int spaces=i; spaces<=5; spaces++){
            printf(" ");
        }
        for(int k=(2*i)-1; k>0; k--){
            printf("*");
        }
        printf("\n");
    }
}