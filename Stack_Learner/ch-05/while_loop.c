#include <stdio.h>

int main(void){

    char ch= 'c';
    int a,b;

    while (ch != 'q'){


        printf("Please integer two number: ");
        scanf("%d %d",&a,&b);
        int results = a+b;
        printf("Results: %d\n",results);

        printf("Type c to run again or quit type q: ");
        scanf(" %c",&ch);

    }

    return 0;
}