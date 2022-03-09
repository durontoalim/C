#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    int luckey_number;
    printf("Please a Random Number 1 to 10: ");
    scanf("%d", &luckey_number);

    time_t t;
    srand((unsigned)time(&t));

    int random_number = rand()%10+1;

    if(luckey_number == random_number){
        printf("Congratualations . Your Luckey Number : %d", random_number);
    } else{
        printf("Sorry. Your Random Number Number : %d Please Try Again", random_number);
    }


    return 0;
}