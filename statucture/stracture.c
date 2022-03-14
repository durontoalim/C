#include <stdio.h>

struct student_data
    {
        int id;
        int marks;
        char fevorite_char;
    };

int main()
{
    struct student_data Duronto, Alim, Utin, Utissy;

// first student data
    Duronto.marks = 564;
    Duronto.id = 1043;
    Duronto.fevorite_char = 'M';

// second student data
    
    Alim.marks = 564;
    Alim.id = 1043;

    // print first student information

    printf("First student id is : %d\n", Duronto.id);
    printf("First student marks is : %d\n", Duronto.marks);
    printf("First student fevorite Charecter is : %c\n", Duronto.fevorite_char);

}