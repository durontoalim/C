#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10],i,fibo,N;
    cin>>N;
    
    arr[0] = 0;
    arr[1] = 1;
    for(i=2;i<N;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(i=0;i<N;i++){
        cout<<arr[i]<<endl;
    }
}