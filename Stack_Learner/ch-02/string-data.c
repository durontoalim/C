#include <stdio.h>

int main(void)
{
    // char name[20];
    // name[0] = 'A';
    // name[1] = 'L';
    // name[2] = 'I';
    // name[3] = 'M';
    // printf("%s\n", name);

    // // Or,

    // char name2[20] = {'A', 'L', 'I', 'M'};
    // printf("%s\n", name2);

    // // Or 
    // char name3[20] = "Abdul Alim";
    // printf("%s", name3);

    char name4[20];
    printf("What is your name ?");
    scanf("%s",&name4);

    printf("My name is : %s", name4);

}