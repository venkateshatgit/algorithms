/* 
Given an array, print maximum sum of subarray with length k
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int *arr = new int[n];
    for(int i=0; i<n; ++i)
        cin>>arr[i];

    int sum=0, maximum;
    for(int i=0; i<k; ++i)
        sum+=arr[i];

    maximum=sum;

    for(int i=1; i<=(n-k); ++i){
        sum+=(arr[i+k-1]-arr[i-1]);
        maximum = max(maximum, sum);
    }

    cout<<maximum<<endl;

    delete [] arr;
    return 0;
}