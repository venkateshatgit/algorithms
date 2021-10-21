#include <bits/stdc++.h>
#include "Polynomial.cpp"

using namespace std;

int main(){

    Polynomial p1;
    p1.setCoefficient(0, 1);
    p1.setCoefficient(1, 2);
    p1.setCoefficient(2, 3);
    p1.setCoefficient(3, 4);
    p1.setCoefficient(4, 5);

    Polynomial p2;
    p2.setCoefficient(1, 7);
    p2.setCoefficient(3, 9);

    Polynomial p3;
    Polynomial p4;

    p1.print();
    p2.print();
    p3 = p1 + p2;
    p4 = p1 - p2;

    p3.print();
    p4.print();

   

    Polynomial p5, p6, p7, p8;
    p5.setCoefficient(0, 3);
    p5.setCoefficient(1, 2);

    p6.setCoefficient(0, 0);
    p6.setCoefficient(1, 1);
    p6.setCoefficient(2, 4);

    p5.print();
    p6.print();

    p7 = p5 * p6;
    p8 = p1 * p2;

    p7.print();
    p8.print();


    return 0;
}