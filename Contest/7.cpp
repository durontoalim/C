#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n,i,sum=0;
    cin>>n;
    long long x[n];

    for(i=0;i<n;i++){
        cin>>x[i];
    }
    long long rel = n-6;
    for(i=rel;i<n-1;i++){
        
        sum +=x[i];
    }
    cout<<sum<<endl;
    return 0;
}