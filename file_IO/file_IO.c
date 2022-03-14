#include <stdio.h>


int main(){

    char line[255];

    FILE *fpointer = fopen("utin.txt","r");

    fgets(line,255,fpointer);  //access the first line
    fgets(line,255,fpointer);  //access the second line

    printf("%s", line);


    // fprintf(fpointer,"\nDuronto, Id, Section");

    fclose(fpointer);


    return 0;
}