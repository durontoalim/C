#include <stdio.h>

int main(){

    int array[5];

    array[0] = 10;
    array[1] = 20;
    array[2] = 90;
    array[3] = 8;
    array[4] = 50;

    // Sum Number
    int sum=0;
    for(int k =0; k<=array[k];k++){
        sum += array[k];
    }
    printf("%d\n", sum);

    //find average scrope
    printf("The average number is: %d\n", sum/5);

    //highest number
    int max = array[0];
    for(int j=0; j<5;j++){
        if(array[j] > max){
            max = array[j];
        }
    }
    printf("%d\n",max);

    // min array value 
    int min = array[0];
    for(int m =0; m<array[m];m++){
        if(array[m] <min){
            min = array[m];
        }
    }
    printf("%d",min);


    return 0;

}