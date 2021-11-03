#include <bits/stdc++.h>
using namespace std;

void printBarChart(int* arr, int n, int h){

    while(h>0){

        for(int i=0; i<n; ++i){

            if(h==arr[i]){
                cout<<" * ";
                arr[i]-=1;
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
        h-=1;
    }
}

int main(){

    int n, height=INT_MIN;
    cin>>n;
    int* arr=new int[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        height=max(height, arr[i]);
    }
        

    printBarChart(arr, n, height);

    delete [] arr;
    return 0;
}
