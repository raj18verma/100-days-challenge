// Question Link:= https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& nums) {   
	int n=nums.size();
	int low=0, high=n-1, ans=INT_MAX;

	while(low<=high){
		int mid=(low+high)/2;
		if(nums[low]<=nums[mid]){
			ans=min(ans,nums[low]);
			low=mid+1;
		}else{
			ans=min(ans,nums[mid]);
			high=mid-1;
		}
	}
	return ans; 
    }
};

// Refer this article: https://takeuforward.org/data-structure/minimum-in-rotated-sorted-array/
