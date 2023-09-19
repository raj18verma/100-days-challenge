// Question Link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        return nums[n-k];
    }

// This is naive approach, first study heap or priority queue to know about better approach
