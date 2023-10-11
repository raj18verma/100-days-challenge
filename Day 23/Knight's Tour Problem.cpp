// Question Link:- https://www.geeksforgeeks.org/the-knights-tour-problem/

#include<bits/stdc++.h>
using namespace std;
#define N 8 

// Print the solution Matrix
void printSolution(int arr[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}



// isSafe() to check all givin & boundary conditions 
bool isSafe(int x, int y, int val){
    if(x<N && y<N && x>=0 && y>=0 && val == 0)
        return true;
        
    return false;
}
    

// Function to fill the matrix with all possible moves
bool findAnswer(int arr[N][N], int row[N], int col[N], int x, int y, int k){
    
    for(int i=0; i<N; i++){
        
        if(isSafe(x+row[i], y+col[i], arr[x+row[i]][y+col[i]])){
            
            arr[x+row[i]][y+col[i]] = k;
            
            if(k==64){
                printSolution(arr);
                return true;
            }
           
            if(findAnswer(arr, row, col, x+row[i], y+col[i], k+1))
                return true;  
            
            arr[x+row[i]][y+col[i]] = 0;
        }
    }
    
    return false;
    
}

int main(){
    int arr[N][N] = {};
    int row [] = {2, 1, -1, -2, -2, -1, 1, 2};
    int col [] = {1, 2, 2, 1, -1, -2, -2, -1};
    
    arr[0][0] = 1;
    findAnswer(arr, row, col, 0, 0, 2);
    return 0;
}

// Refer this yt video:- https://youtu.be/pwlxQeHchFQ?si=yqMZisFEqwReiSPH

