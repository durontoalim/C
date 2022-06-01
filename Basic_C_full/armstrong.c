#include <stdio.h>
#include <math.h>

int main() {
    
    int num=153,sum = 0, temp;
    
    while(num != 0){
        temp = num%10;
        sum = sum +pow(temp,3);
        num /= 10;
    }
    
    printf("%d",sum);
    
    return 0;
}