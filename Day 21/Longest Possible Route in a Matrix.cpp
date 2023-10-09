// Question Link:- https://practice.geeksforgeeks.org/problems/longest-possible-route-in-a-matrix-with-hurdles/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

class Solution {
public:
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
        if(matrix[xs][ys]==0 || matrix[xd][yd]==0)return -1;
        int ans = -1;
        findLongestPath(matrix,xs,ys,xd,yd,0,ans);
        return ans;
    }
    void findLongestPath(vector<vector<int>> &matrix,int x,int y,int xd,int yd,int pathlength,int &ans)
     {
         if(x == xd && y == yd)
         {  if(pathlength>ans)ans = pathlength; return; }
         
         matrix[x][y]  = 2; 
         
         vector<pair<int,int>>neighbours = {{0,1}, {0,-1}, {1,0} ,{-1,0}};
         
         for(pair<int,int>neighbour : neighbours) {
             int newx = neighbour.first+x , newy = neighbour.second+y;
         if(newx>=0 && newy>=0 && newx<matrix.size() && newy<matrix[0].size() && matrix[newx][newy]==1)
             findLongestPath(matrix,newx,newy,xd,yd,pathlength+1,ans); }
         
         matrix[x][y] =1;
     }
};


// Refer yt video:- https://youtu.be/PYNQ0wSGgMs?si=FuMAKEGzLy5k124p
