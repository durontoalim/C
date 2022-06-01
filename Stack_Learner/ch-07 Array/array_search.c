#include <stdio.h>

int main(){

    int i;

    int array[] = {10,20,30,40,50};

    int search_key;
    printf("Please Your search Key: \n");
    scanf("%d", &search_key);

    for(i=0;i<array[i];i++){
        if(array[i] == search_key){
            printf("Your key Match: %d\n",array[i]);
            break;
        } else{
            printf("Your key doesn't match\n");
            break;
        }
    }

    return 0;
}