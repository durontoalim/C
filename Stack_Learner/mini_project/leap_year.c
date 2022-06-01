#include <stdio.h>

int main(void)
{
    int input_year;

    printf("Please Type Your Year: ");
    scanf("%d", &input_year);

    if((input_year % 4 == 0 && input_year % 100 != 0) || input_year%400==0){
        printf("Congratulations, %d is a Leap Year \n", input_year);
    } else{
        printf("Sorry, %d is a not leap Year \n", input_year);
    }
    
    return 0;
}