#include <bits/stdc++.h>
using namespace std;

int currentBaseToNum(int base, int number){
    int sum=0, multiple=1, r;
    while(number>0){
        r=number%10;
        sum+=r*multiple;
        multiple=multiple*base;
        number=number/10;
    }

    return sum;
}

int numberToconvertto(int base, int number){
    int sum=0, multiple=1, r;
    while(number>0){
        r=number%base;
        sum+=r*multiple;
        multiple=multiple*10;
        number=number/base;
    }

    return sum; 
}

int main(){
    int num, base, convertto;
    cin>>num>>base>>convertto;

    int number = currentBaseToNum(base, num);
    
    cout<<numberToconvertto(convertto, number)<<endl;

    return 0;
}