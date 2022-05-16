#include <stdio.h>


int fun(){

    int* fun;

    int M = 50;

     fun = &M;


    return *fun;
}

int main()
{
    



    int* ptr, *ptr2, ptr3;
    int n,N;

    n = 5;
    N = 10;

    ptr = &n;
    ptr2 = &N;
    ptr3 = fun();

    printf("%d %d", *ptr + *ptr2, ptr3);




    return 0;


}
