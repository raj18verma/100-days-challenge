// Question Link:- https://leetcode.com/problems/find-champion-i/description/

class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for (int i=0; i<grid.size(); i++){
        bool ans=true;
        for(int j=0; j<grid.size(); j++){
            if(i!=j && grid[j][i]==1){
                ans=false;
                break;
            }
        }

        if(ans) return i;
    }
        return -1;
    }
};
