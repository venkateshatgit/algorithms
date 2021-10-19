/*
https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1/?page=1&category[]=sliding-window&query=page1category[]sliding-window#
*/


#include <bits/stdc++.h>
using namespace std;


//NavieSoln Giving time limit error
vector <int> navieSoln(int *arr, int n, int k){

    int maximum;
    vector <int> v;
    for(int i=0; i<=n-k; ++i){
        maximum=arr[i];
        for(int j=i; j<(i+k); ++j){
            maximum=max(maximum, arr[j]);
        }
        v.push_back(maximum);
    }
    
    return v;
}

void printVector(vector <int> v){
    
    for(int i=0; i<v.size(); ++i)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main(){

    int n, k;
    cin>>n>>k;
    int *arr=new int[n];
    for(int i=0; i<n; ++i)
        cin>>arr[i];

    printVector(navieSoln(arr, n, k));
    delete [] arr;
    return 0;
}