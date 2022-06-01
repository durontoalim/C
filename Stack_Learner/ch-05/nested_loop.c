#include <stdio.h>

int main(){

    int height,weight;

    printf("Please height number: ");
    scanf("%d",&height);

    printf("Please weight number: ");
    scanf("%d",&weight);

    for(int i = 1; i<=height;i++){
        for(int j=1; j<=weight; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}