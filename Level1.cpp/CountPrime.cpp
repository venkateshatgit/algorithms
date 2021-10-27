#include <bits/stdc++.h>
using namespace std;

int CountPrime(int n){

    bool *prime = new bool [n];
    for(int i=0; i<n; ++i)
        prime[i]=true;

    for(int i=2; i*i<n; ++i){

        if(prime[i]){
            for(int j=i; j*i<n; ++j)
                prime[j*i]=false;
        }
    }

    int countPrime=0;
    for(int i=2; i<n; ++i){
        if(prime[i])
            countPrime+=1;
    }

    return countPrime;
}

int main(){
    int n;
    cin>>n;
    cout<<CountPrime(n)<<endl;

    return 0;
}