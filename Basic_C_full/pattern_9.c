// 3
//   1
//  10
// 101

#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            if(k%2 == 0){
                printf("0");
            }
            else printf("1");
        }

        printf("\n");
        
    }
    
    return 0;
}