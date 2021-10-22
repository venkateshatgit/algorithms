//https://www.youtube.com/watch?v=LliQjLnbhx8&list=PL-Jc9J83PIiE-181crLG1xSIWhTGKFiMY

// input: pep
//output:
// pep
// pe1
// p1p
// p2
// 1ep
// 1e1
// 2p
// 3

#include <bits/stdc++.h>
using namespace std;

string check(string s){

    for(int i=1; i<s.size(); ++i){
        if(s[i]>=48 && s[i]<=58 && s[i-1]>=48 && s[i-1]<=58){
            int a=s[i]-48;
            int b=s[i-1]-48;
            string c=to_string(a+b);
            s = s.substr(0, i-1) + c + s.substr(i+1); 
        }
    }

    return s;
}

void abbrevate(string str, string s, vector <string> &v){

    s=check(s);

    if(str.size()==0){
        v.push_back(s);
        return;
    }

    
    abbrevate(str.substr(1), s+str[0], v);
    abbrevate(str.substr(1), s+"1", v);

    return;
}

int main(){
    string str;
    cin>>str;

    vector <string> v;
    abbrevate(str, "", v);

    for(int i=0; i<v.size(); ++i)
        cout<<v[i]<<endl;


    string s = check(str);
    cout<<s<<endl;

    return 0;
}