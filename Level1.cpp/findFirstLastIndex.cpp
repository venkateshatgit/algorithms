#include <bits/stdc++.h>
using namespace std;

int findIndex(int* arr, int first, int second, int size, int k){

    int s=0, e=size-1, mid, ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;
        
        if(first){
            if(arr[mid]==k){
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>k)
                e=mid-1;
            else{
                s=mid+1;
            }
        }

        else{
            if(arr[mid]==k){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]<k)
                s=mid+1;
            else{
                e=mid-1;
            }
        }
    }

    return ans;
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    
    int first=findIndex(arr, 1, 0, n, k);
    int second=findIndex(arr, 0, 1, n, k);

    cout<<first<<" "<<second<<endl;
    return 0;
}