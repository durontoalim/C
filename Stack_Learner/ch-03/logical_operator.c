#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool a = true;
    bool b = false;

    int results = a && b;
    printf("%d \n", results); //0


    results = a || b;
    printf("%d \n", results); //0


    results = a>b;
    printf("%d \n", results); // 1
    
    results = a>b;
    printf("%d", results); // 1
    
    
    
    
    
    
    return 0;
}