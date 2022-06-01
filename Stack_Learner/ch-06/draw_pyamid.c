#include <stdio.h>

int main(void){
    // Half Pyramid
    int a=5;
    for(int i=1; i<=a;i++){
        for(int j= 1; j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    // Full Pyramid 2n-1
    
    int rows =5;
    for(int n=0;n<rows;n++){
        for(int y = n+1; y< rows; y++){
            printf(" ");
        }
        for(int z =0; z< (2*n)-1; z++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}