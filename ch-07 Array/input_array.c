#include <stdio.h>

int main(void){

    int i;

    int size = 4;
    int array[size];

    printf("Input array num: \n");

    for(i =0; i<size;i++){
        scanf("%d", &array[i]);
    }

    printf("Output: \n");

    int sum=0;

    for(i =0; i<size; i++){
        printf("%d\n", array[i]);
        sum += array[i];
    }
    printf("The sum array is %d\n", sum);

    printf("The array value average is: %d\n", sum/size);

    int max = array[0];

    for(i=0;i<size;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("Max Value: %d\n",max);



    return 0;

}