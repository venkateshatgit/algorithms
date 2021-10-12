#include <bits/stdc++.h>
using namespace std;

void printKeyPad(int n, map<int, string> m, string s){

    if(n==0){
        cout<<s<<endl;
        return;
    }

    int x=n%10;
    for(int i=0; i<m[x].size(); ++i)
        printKeyPad(n/10, m, m[x][i]+s);
}

int main(){

    map <int, string> m;
    m[0]="";
    m[1]="";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";

    int n;
    cin>>n;
    printKeyPad(n, m, "");
    return 0;
}