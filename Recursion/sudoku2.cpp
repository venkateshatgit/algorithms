#include <bits/stdc++.h>
using namespace std;


bool check(int** arr, int r, int c, int num){

    for(int i=0; i<9; ++i){
        if(arr[r][i]==num || arr[i][c]==num)
            return false;
    }

    int rs, re, cs, ce;
    if(r>=0 && r<3){
        rs=0; re=2;
    }
    else if(r>=3 && r<6){
        rs=3; re=5;
    }
    else{
        rs=6; re=8;
    }



    if(c>=0 && c<3){
        cs=0; ce=2;
    }
    else if(c>=3 && c<6){
        cs=3; ce=5;
    }
    else{
        cs=6; ce=8;
    }

    for(int i=rs; i<=re; ++i){
        for(int j=cs; j<=ce; ++j){
            if(arr[i][j]==num)
                return false;
        }
    }

    return true;
}


bool sudoku(int** arr, int r, int c){
    if(r>=9)
        return true;

    for(int j=c; j<9; ++j){

        if(arr[r][j]==0){

            for(int num=1; num<=9; ++num){
                if(check(arr, r, j, num)){
                    arr[r][j]=num;
                    bool result=sudoku(arr, r, j+1);
                    if(result)
                        return true;
                    arr[r][j]=0;
                }
            }

            if(arr[r][j]==0)
                return false;
        }
    }

    return sudoku(arr, r+1, 0);
}

void printArr(int** arr){

    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

}

int main(){
    
    int** arr=new int*[9];
    for(int i=0; i<9; ++i)
        arr[i]=new int[9];

    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j)
            cin>>arr[i][j];
    }

    bool ans=sudoku(arr, 0, 0);
    if(ans){
        cout<<"true"<<endl;
        //printArr(arr);
    }
    else
        cout<<"false"<<endl;

    for(int i=0; i<9; ++i)
        delete [] arr[i];
    delete [] arr;
    
    return 0;
}