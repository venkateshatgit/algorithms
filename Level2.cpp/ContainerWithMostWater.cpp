#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    
    int max_water=INT_MIN, water;
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){

            water=min(arr[i], arr[j])*(j-i);
            max_water=max(max_water, water);
        }
    }

    cout<<max_water<<endl;

    delete [] arr;
    return 0;
}