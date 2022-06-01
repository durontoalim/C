#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void){

    time_t t;
    srand((unsigned)time(&t));

    int user_num;
    int rand_numb = rand()%10+1;
    int chance = 5;

    bool loss = true;

    while(chance>0){

        printf("Please Input number 1 to 10 (Chance : %d): ", chance);
        scanf("%d",&user_num);
        
        if(user_num == rand_numb){
            printf("Congratualations, Your lucky Number: %d\n",rand_numb);
            loss = false;
            break;
        }
        chance--;
    }
    if(loss){
        printf("You Have loss the games");
    }
    return 0;
}