#include <stdio.h>

int main(){
    
    int a;
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Friday");
        break;
    case 2:
        printf("SatarDay");
        break;

    case 3:
        printf("Sunday");
        break;
    
    default:
        printf("Error");
        break;
    }

    return 0;
}