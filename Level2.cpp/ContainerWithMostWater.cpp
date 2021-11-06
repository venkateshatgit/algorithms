#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0; i<n; ++i)
        cin>>arr[i];

    int i=0, j=n-1;
    int height, width, water=0;
    while(i<j){
        height=min(arr[i], arr[j]);
        width=(j-i);
        water=max(water, height*width);


        if(arr[i]<arr[j])
            i+=1;
        else
            j-=1;
    }

    cout<<water<<endl;

    delete [] arr;
    return 0;
}