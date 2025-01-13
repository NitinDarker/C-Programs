// Pattern 5
#include <stdio.h>
void main(){
    for(int i=0; i<6; i++){
        for(int j=5; j>i; j--){
            printf(" ");
        }
        for(int j=6; j>i; j--){
            printf("-");
        }
        printf("\n");
    }
    for(int i=5; i>0; i--){
        for(int j=i; j<6; j++){
            printf(" ");
        }
        for(int j=i; j<7; j++){
            printf("-");
        }
        printf("\n");
    }
}
