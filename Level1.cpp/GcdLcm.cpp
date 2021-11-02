#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m){

    int x = min(n,m);
    int gcd = 1;
    for(int i=2; i<=x; ++i){
        if(n%i==0 && m%i==0)
            gcd=i;
    }

    return gcd;
}

int lcm(int n, int m){
    
    return 0;
}

int main(){

    int n1, n2;
    cin>>n1>>n2;

    cout<<gcd(n1, n2)<<endl;
    cout<<lcm(n1, n2)<<endl;

    return 0;
}


