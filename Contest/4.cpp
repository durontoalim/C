#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,last_d, first_d, sum =0;
    cin>>n;
    last_d = n%10;
    while(n>= 10){
        n /= 10;
    }
    first_d = n;
    sum = first_d+last_d;
    cout<<sum<<endl;

    return 0;
}
