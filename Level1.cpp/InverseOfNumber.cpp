#include <bits/stdc++.h>
using namespace std;

int power(int n){

    int p=1;
    while(n>0){
        p=p*10;
        n-=1;
    }

    return p;
}

int inverseIt(int n){
    
    int x=1, r, sum=0, p;
    while(n>0){
        r=n%10;
        p=power(r-1);
        sum+= x*p;
        x+=1;
        n=n/10;
    } 

    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<inverseIt(n)<<endl;

    return 0;
}