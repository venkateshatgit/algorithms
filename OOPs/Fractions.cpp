#include <bits/stdc++.h>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator; 
    }

    void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }

    void simplify(){
        int gcd=1;
        int m = min(this->denominator, this->numerator);
        for(int i=2; i<=m; ++i){
            if((this->denominator)%i==0 && (this->numerator)%i==0)
                gcd=i;
        }

        this->denominator = (this->denominator)/gcd;
        this->numerator = (this->numerator)/gcd;
    }

    void add(Fraction f){
        int num = this->numerator * (f.denominator) + f.numerator * (this->denominator);
        int deno = this->denominator * f.denominator;

        this->numerator = num;
        this->denominator = deno;

        simplify();
    }
};


