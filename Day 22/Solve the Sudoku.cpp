// Question Link:- https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1

class Solution 
{
    public:
    //Function to find a solved Sudoku.
    
    bool isValid(int board[N][N],int row,int col,int d){
    for(int i=0;i<N;i++){
        if(board[i][col]==d) return false;
        if(board[row][i]==d) return false;
        if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==d) return false;
    }
    return true;
}

    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(grid[i][j]==0){
              for (int d = 1; d <= 9; d++) {
                if (isValid(grid, i, j, d)){
                    grid[i][j]=d;
                    if(SolveSudoku(grid)) return true;
                    else grid[i][j]=0;

                }
              }
              return false;
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        if(SolveSudoku(grid)){
            for(int i =0; i< N; i++){
                for(int j= 0;j< N; j++){
                    cout<< grid[i][j]<< " ";
                }
             
            }
        }
    }
};

// T.C:- O(9^(n^2))  and  S.C:- O(1)

// Refer this article:- https://takeuforward.org/data-structure/sudoku-solver/
