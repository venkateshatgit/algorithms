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

int addNumber(int n, int m, int base){

    int r1, r2, sum=0, carry=0, multi=1;
    while(n>0 || m>0 || carry>0){

        r1=n%10;
        r2=m%10;

        sum+=((r1+r2+carry)%base)*multi;
        multi=multi*10;
        carry=(r1+r2+carry)/base;

        n=n/10;
        m=m/10;
    }

    return sum;
}

int subtractNumber(int n, int m, int base){

    int num1=max(n, m), num2=min(n, m);
    int r1=num1%10, r2=num2%10, sum=0, r3=(num1%100-num1%10)/10, multi=1;
    while(num1>0 || num2>0 || r1>0 ){
        
        while(r1<r2){
            r1+=base;
            r3-=1;
        }

        sum+=(r1-r2)*multi; 
        multi*=10;
        num1=num1/10;
        num2=num2/10;

        
        r1=r3;
        r3=(num1%100-num1%10)/10;
        r2=num2%10;
    }

    return sum;
}

int multiply(int nn, int mn, int base){

    int result=0, multi2=1;
    

    while(mn>0){

        int m=mn%10;
        int sum=0, multi=1, carry=0, product, n=nn;
        while(n>0 || carry>0){

            product = (n%10)*m+carry;
            sum = sum + (product % base) * multi;
            carry = product / base;
            multi = multi * 10;

            n=n/10;

            
        }   

        cout<<sum*multi2<<" "<<result<<endl; 

        result=addNumber(sum*multi2, result, base);
        multi2=multi2*10;
        mn=mn/10;
    }

    return result;
}

int main(){
    // int num, base, convertto;
    // cin>>num>>base>>convertto;

    // int number = currentBaseToNum(base, num);
    
    // cout<<numberToconvertto(convertto, number)<<endl;

    // int n1, n2, base;
    // cin>>n1>>n2>>base;

    // // cout<<addNumber(n1, n2, base)<<endl;

    // cout<<subtractNumber(n1, n2, base)<<endl;

    int n, m ,base;
    cin>>n>>m>>base;

    cout<<multiply(n, m, base)<<endl;

    return 0;
}