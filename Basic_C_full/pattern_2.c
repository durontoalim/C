// 1 
// 2 2
// 3 3 3
// 4 4 4 4

#include <stdio.h>
int main()
{
    int n=5;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}