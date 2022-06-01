// A 
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F

#include <stdio.h>
int main()
{
    int n=5;
    char ch = 'A';
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ",ch+i);
        }
        printf("\n");
    }
    return 0;
}