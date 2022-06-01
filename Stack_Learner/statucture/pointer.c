#include <stdio.h>

int main()
{
    int address = 50;

    int *p;

    p = &address;

    printf("%x \n", p); // 
    printf("The value of p : %d", *p);
}