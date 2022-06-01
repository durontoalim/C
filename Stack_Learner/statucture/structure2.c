#include <stdio.h>


struct hello {

    int id;
    int roll;
    int nid;
    int passport;
};


int main(){

    struct hello Alim,Duronto,Utin;

    Alim.id = 5590;
    Alim.roll = 90;
    Alim.nid = 559056745;

    printf("%d\n", Alim.id);
    printf("%d\n", Alim.roll);
    printf("%d\n", Alim.nid);


    printf("%d\n", Alim);

    return 0;
    
}