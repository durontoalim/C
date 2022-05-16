#include <stdio.h>

void swap(int* aa,int* bb){
    int temp =*aa;
    *aa=*bb;
    *bb=temp;

    printf("%d %d\n", *aa,*bb);
}


int main()
{
    
    int a,b;
    a=5;
    b=6;

    swap(&a,&b);

    printf("%d %d\n",a,b);

    // printf("%d %d",b,&b);





    return 0;
}