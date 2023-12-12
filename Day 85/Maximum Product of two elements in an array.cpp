// Question Link:- https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int num1=nums[n-1]-1;
        int num2=nums[n-2]-1;
        return num1*num2;
    }
};
