#include <stdio.h>
int main()
{

    int n1 = 2,sum=0;
    int n2 = 1;
    
    printf("%d + %d",n1,n2);

    for(int i=3; i<=10; i++){
        sum = n1+n2;
        printf(" + %d",sum);
        n1 = n2;
        n2 = sum;
    }
    return 0;
}