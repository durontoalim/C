#include <stdio.h>

    typedef int integer_num; // int num bikolpo variables
    typedef char charecter; // char to charecter name assign

    typedef struct person
{
    charecter name[20];
    integer_num height;
    integer_num weight;
}Person; //person struct person er demo short type


int main(){
    

    Person demoPerson;

    demoPerson.name='C';
    demoPerson.height = 5.0;
    demoPerson.weight = 65;

    printf("%c", demoPerson.name);
    printf("%d\n", demoPerson.height);
    printf("%d\n", demoPerson.weight);


    getchar();
}