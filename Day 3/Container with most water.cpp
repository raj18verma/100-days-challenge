// Question Link:- https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
    int n=height.size();
    int left=0;
    int right=n-1;
    int maxi=0;

    while(left<right){
        int lh=height[left];
        int rh=height[right];
        int min_height=min(lh,rh);
        maxi=max(maxi,min_height*(right-left));

        if(lh<rh) left++;
        else right--;
    }
    return maxi;
    }
};


// Refer this video:- https://youtu.be/ZHQg07n_tbg?si=xHeltw0R3ypaNkgH
