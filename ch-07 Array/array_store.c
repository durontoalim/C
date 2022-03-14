#include <stdio.h>

int main(){

    long long array[5];

    array[0] = 10;
    array[1] = 10;
    array[2] = 10;
    array[3] = 10;
    array[4] = 10;


    printf("%u\n",&array);
    printf("%u\n",&array[0]);
    printf("%u\n",&array[1]);
    printf("%u\n",&array[2]);
    printf("%u\n",&array[3]);



    int array2[5] = {10,20,30,40,50};

    printf("%d\n", array2[2]);
    printf("%d", sizeof(array2[0]));




    return 0;
}