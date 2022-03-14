#include <stdio.h>


int main(){
    int i,j,temp;

    int array[] = {20,34,56,7,8,4,3,2};

    for(i=0; i<array[i];i++){
        for(j=0;j<array[j];j++){
            if(array[i] < array[j]){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            }
        }
    }
    for(i=0;i<array[i];i++){
        printf("%d ", array[i]);
    }
}