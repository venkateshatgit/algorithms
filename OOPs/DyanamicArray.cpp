#include <bits/stdc++.h>
#include "DyanamicArrayClass.cpp"

using namespace std;


int main(){

    DyanamicArray a1;
    a1.addItems(10);
    a1.addItems(20);
    a1.addItems(30);
    a1.addItems(40);
    a1.addItems(50);
    a1.addItems(60);

    DyanamicArray a2(a1);
    DyanamicArray a3;
    a3=a1;
    a1.printArray();
    a1.addItems(0, 100);
    a2.printArray();
    a3.printArray();
    a1.printArray();

    return 0;
}