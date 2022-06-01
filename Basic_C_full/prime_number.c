#include <stdio.h>
#include <math.h>
 
int main() {
    
    int n,count = 0;

    scanf("%d",&n);

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            count++;
            break;
        }
    }

    if(count == 0){
        printf("Prime Number");
    }
    else
    printf("Not a prime number");

 
    return 0;
}