#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int N,total_round;
    while(scanf("%d",&N) != EOF){
        total_round = N*(N-1)/2;
        cout<<total_round<<endl;
    }
    return 0;
}