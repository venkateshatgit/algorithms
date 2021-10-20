#include <bits/stdc++.h>
using namespace std;

class DyanamicArray{
    int *data;
    int nextIndex;
    int capacity;

public:
    DyanamicArray(){
        nextIndex=0;
        capacity=5;
        data = new int[capacity];
        cout<<"HI"<<endl;
    }

    DyanamicArray(DyanamicArray const &d){
        //this->data = d.data;  //Shallow copy

        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;

        this->data = new int[d.capacity];
        for(int i=0; i<capacity; ++i)
            this->data[i]=d.data[i];

    }
    
    int* doubleArray(int* data, int capacity){

        int* newArray = new int[2*capacity];
        for(int i=0; i<capacity; ++i){
            newArray[i]=data[i];
        }

        return newArray;
    }

    void addItems(int x){

        if(nextIndex==capacity){
            int* newdata=doubleArray(data, capacity);
            delete [] data;
            data = newdata;
            capacity*=2;
        }

        data[nextIndex]=x;
        nextIndex+=1;
    }

    void addItems(int index, int element){

        if(index < nextIndex && index>=0)
            data[index]=element;
        else if(index == nextIndex){
            addItems(element);
        }
        else{
            return;
        }

    }

    void printArray(){
        
        cout<<"capacity: "<<capacity<<endl;
        for(int i=0; i<nextIndex; ++i)
            cout<<data[i]<<" ";
        cout<<endl;

    }

    int get(int index){
        if(index>=nextIndex || index<0)
            return -1;
        
        return data[index];
    }


};