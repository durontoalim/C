#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,i;
    // cin>>n>>k;
    scanf("%d %d",&n,&k);
    int sum = 0;
    int count = 0;

    for(i=k;i<=n+i;i++){
        sum += i;
        count++;
        if(count == n){
            break;
        }
    }
    // cout<<sum<<endl;
    printf("%d",sum);

    return 0;
}
