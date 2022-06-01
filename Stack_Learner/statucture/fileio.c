#include <stdio.h>


int main()
{

    char line[200];

    FILE *fpointer = fopen("file.txt", "r"); // mode w,r = terminal printf   a=append new doc

    fgets(line,200,fpointer); // access file
    fgets(line,200,fpointer); // access file
    printf("%s",line);
    printf("%s",line);

    // fprintf(fpointer, "Alim\nUtin\nDuronto\n");

    fclose(fpointer);

    return 0;
}