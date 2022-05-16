#include <bits/stdc++.h>

using namespace std;

int main(){

    int array[4][4] =
    {
        {2,5,6,8},
        {12,33,54,65},
        {2,8,9,3},
        {32,23,6,8}
    };

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}