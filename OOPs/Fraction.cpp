#include <bits/stdc++.h>
#include "Fractions.cpp"

using namespace std;

int main(){

    Fraction f1(10, 2);
    Fraction f2(15, 4);

    f1.print();
    f2.print();

    f1.add(f2);
    f1.print();

    f1.multiply(f2);
    f1.print();
    f2.print();

    Fraction f3 = f1 + f2;

    f3.print();

    Fraction f4 = f1 * f2;
    f4.print();

    return 0;
}