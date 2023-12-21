// Question Link:- https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(points[i][0]);
        }

        sort(arr.begin(),arr.end());
        int k=0;
        n=arr.size();
        for(int i=0;i<n-1;i++){
            k=max((arr[i+1]-arr[i]),k);
        }

        return k;
    }
};
