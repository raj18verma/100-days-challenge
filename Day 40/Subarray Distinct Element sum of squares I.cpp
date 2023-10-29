// Question Link:- https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/

class Solution {
public:
    
    int func(vector<int>nums, int left, int right){
        set<int>ans;
        int count=0;
        
        for(int i=left; i<=right; i++){
            if(ans.find(nums[i])==ans.end()){
                count++;
                ans.insert(nums[i]);
            }
        }
        return count;
    }
    
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int sum=0; 
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int ans=func(nums,i,j);
                sum+=ans*ans;
            }
        }
        return sum;
    }
};
