#include <bits/stdc++.h>
using namespace std;

class Polynomial
{
private:
    int capacity;
    int* degCoefficient;
public:
    //Defalut Constructor
    Polynomial(){
        capacity = 5;
        degCoefficient = new int[5];
        for(int i=0; i<5; ++i)
            degCoefficient[i] = 0;
    }

    Polynomial(Polynomial  const &p){
        
        this->capacity = p.capacity;
        this->degCoefficient = new int[capacity]; 

        for(int i=0; i<capacity; ++i){
            degCoefficient[i] = p.degCoefficient[i];
        }
    }

    //Operator Overloading
    void operator=(Polynomial  const &p){

        this->capacity = p.capacity;
        this->degCoefficient = new int[capacity]; 

        for(int i=0; i<capacity; ++i){
            degCoefficient[i] = p.degCoefficient[i];
        }
    }

    Polynomial operator+(Polynomial const &p){

        Polynomial p3;
        int i=0;
        while(i<capacity || i<p.capacity){

            if(i<capacity && i<p.capacity)
                p3.setCoefficient(i, degCoefficient[i]+p.degCoefficient[i]);
            else if(i<capacity)
                p3.setCoefficient(i, degCoefficient[i]);
            else
                p3.setCoefficient(i, p.degCoefficient[i]);

            i+=1;
        }

        return p3;
    }


    Polynomial operator-(Polynomial const & p){

        Polynomial p3;
        int i=0;
        while(i<capacity || i<p.capacity){

            if(i<capacity && i<p.capacity)
                p3.setCoefficient(i, degCoefficient[i]-p.degCoefficient[i]);
            else if(i<capacity)
                p3.setCoefficient(i, degCoefficient[i]);
            else
                p3.setCoefficient(i, -p.degCoefficient[i]);

            i+=1;
        }

        return p3;
    }

    Polynomial operator*(Polynomial const & p){

        Polynomial p3;
        int multi=0;

        for(int i=0; i<capacity; ++i){
            for(int j=0; j<p.capacity; ++j){
                
                if(p3.capacity<=(i+j))
                    p3.setCoefficient(i+j, 0);

                multi = p3.degCoefficient[i+j] + degCoefficient[i] * p.degCoefficient[j];
                p3.setCoefficient(i+j, multi);

            }
        }
        return p3;

    }

    void setCoefficient(int d, int value){

        int i=capacity;
        while(capacity<=d){
            capacity*=2;
        }

        for(int j=i; j<capacity; ++j)
            degCoefficient[j]=0;

        degCoefficient[d]=value;
    }

    void print(){

        for(int i=0; i<capacity; ++i){
            
            if(degCoefficient[i]){
                cout<<degCoefficient[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;

    }

};
