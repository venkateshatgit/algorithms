#include <bits/stdc++.h>
using namespace std;

void printMaze(int** maze, int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cout<<maze[i][j]<<" ";
    }
    cout<<endl;
}

void ratMaze(int** track, int** maze, int r, int c, int n){

    if(r==n-1 && c==n-1){
        maze[r][c]=1;
        printMaze(maze, n);
        maze[r][c]=0;
        return;
    }

    if(r>=n || c>=n || r<0 || c<0 || track[r][c]==0 || maze[r][c]==1)
        return;

    

    maze[r][c]=1;
    ratMaze(track, maze, r+1, c, n);
    ratMaze(track, maze, r, c+1, n);
    ratMaze(track, maze, r-1, c, n);
    ratMaze(track, maze, r, c-1, n);
    maze[r][c]=0;
}

int main(){
    int n;
    cin>>n;

    int** track;
    track = new int*[n];
    for(int i=0; i<n; ++i)
        track[i]=new int[n];

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cin>>track[i][j];
    }

    int** maze;
    maze = new int*[n];
    for(int i=0; i<n; ++i)
        maze[i]=new int[n];

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            maze[i][j]=0;
    }

    ratMaze(track, maze, 0, 0, n);

    for(int i=0; i<n; ++i){
        delete [] track[i];
        delete [] maze[i];
    }

    delete [] track;
    delete [] maze;

    return 0;
}