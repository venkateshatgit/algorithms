//https://practice.geeksforgeeks.org/problems/faulty-keyboard2842/1#
#include <bits/stdc++.h>
using namespace std;

int keySum(int key){
    int sum=0, ans=0;
    if(key>=10 && key<=99){
        sum+= 9 + (key-9)*2; 
    }
    else if(key>=100 && key <=999)
        sum+= 9 + (99-9)*2 + (key-99)*3; 
    else if(key>=1000 && key<=9999)
        sum+= 9 + (99-9)*2 + (999-99)*3 + (key-999)*4; 
    else if(key>=10000 && key<=99999)
        sum+= 9 + (99-9)*2 + (999-99)*3 + (9999-999)*4 + (key-9999)*5;
    else
        sum=key;

    

    return sum;
}

int keysPressed(int m){
    
    int s=1, e=m, mid, ans=0, keysPressed;
    while(s<=e){
        mid=(s+e)/2;
        keysPressed = keySum(mid);
        // cout<<s<<" "<<mid<<" "<<e<<" "<<keysPressed<<endl;

        if(keysPressed<=m){
            ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
    }

    return ans;
}

int main(){

    int m;
    cin>>m;
    cout<<keysPressed(m)<<endl;
    return 0;
}