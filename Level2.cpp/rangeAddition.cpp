#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n+1];
    for(int i=0; i<n+1; ++i)
        arr[i]=0;
    int q, s, e, inc;
    
    cin>>q;
    while(q--){
        cin>>s>>e>>inc;

        arr[s]+=inc;
        arr[e+1]+=(-1)*inc;
    }

    int sum=0; 
    for(int i=0; i<n+1; ++i){
        sum+=arr[i];
        arr[i]=sum;
    }

    for(int i=0; i<n; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;

    delete [] arr;
    return 0;
}