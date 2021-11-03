#include <bits/stdc++.h>
using namespace std;

vector <int> SumOfArrays(int* arr1, int n1, int* arr2, int n2){

    vector <int> v;
    int p, carry=0, i=n1-1, j=n2-1;
    while(i>=0 || j>=0 || carry>0){
        p=0;
        if(i>=0){
            p+=arr1[i];
            i-=1;
        }

        if(j>=0){
            p+=arr2[j];
            j-=1;
        }

        p+=carry;
        v.push_back(p%10);
        carry=p/10;

    }

    return v;
}

int main(){
    int n1, n2;
    cin>>n1;
    int* arr1=new int[n1];
    for(int i=0; i<n1; ++i)
        cin>>arr1[i];

    cin>>n2;
    int* arr2=new int[n2];
    for(int i=0; i<n2; ++i)
        cin>>arr2[i];

    vector<int> v = SumOfArrays(arr1, n1, arr2, n2);

    for(int i=v.size()-1; i>=0; i-=1)
        cout<<v[i]<<" ";
    cout<<endl;

    delete [] arr1;
    delete [] arr2;

    return 0;
}