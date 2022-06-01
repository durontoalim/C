#include <stdio.h>
int main()
{
    int n = 145,sum=0,temp,fact;

    int number = n;

    while(n !=0){
        temp = n%10;

        fact = 1;

        for(int i=1; i<=temp; i++){
            fact = fact*i;
        }
        sum += fact;
        n = n/10;
    }

    if(number == sum){
        printf("armstrong number");
    }
    else printf("No Armstrong number");


    return 0;
}