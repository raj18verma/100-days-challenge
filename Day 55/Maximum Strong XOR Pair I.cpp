// Question Link:- https://leetcode.com/problems/maximum-strong-pair-xor-i/description/

class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                int a=nums[i],b=nums[j];
                if(abs(a-b)<=min(a,b)) ans=max(ans,(a^b));
            }
        }
        return ans;
    }
};
