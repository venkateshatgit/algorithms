#include <bits/stdc++.h>
using namespace std;

int findSubset(int* arr, int n, int sum, int k){
    
    if(sum==k)
        return 1;
    
    if(n==0)
        return 0;
    
    int include=findSubset(arr+1, n-1, sum+arr[0], k);
    int notInclude=findSubset(arr+1, n-1, sum, k);

    return include + notInclude;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        
        cout<<findSubset(arr, n, 0, k)<<endl;
    }
    
    return 0;
}