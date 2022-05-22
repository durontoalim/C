#include <stdio.h>
int main()
{
    float x,y;

    printf("Please Two Input a number : \n");

    scanf("%f %f", &x, &y);

    float sum = x+y; 
    float mul = x*y;
    float devi = x/y;
    float sub = x-y;




    printf("sum : %.2f\n", sum);
    printf("mul : %.2f\n", mul);
    printf("devi : %.2f\n", devi);
    printf("sub : %.2f\n", sub);




    return 0;
}