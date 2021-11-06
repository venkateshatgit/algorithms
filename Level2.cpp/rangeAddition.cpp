#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; ++i)
        arr[i]=0;
    int q, s, e, inc;
    cin>>q;
    while(q--){
        cin>>s>>e>>inc;
        for(int i=s; i<=e; ++i)
            arr[i]+=inc;
    }

    for(int i=0; i<n; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;

    delete [] arr;
    return 0;
}