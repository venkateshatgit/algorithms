#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int *arr, int n){

    int s=0, e=n-1;
    while(s<e){}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[n];
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        
        cout<<findPeakElement(arr, n)<<endl;
    }
    return 0;
}