#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10],count = 1,i;
    int N;
    
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cin>>N;
    for(i=0;i<10;i++){
        if(arr[i] != N){
            count += 1;
        }else{
            break;
        }
    }
    if(count>10){
        cout<<"Not Found"<<endl;
    }else{
       cout<<count; 
    }
    

}