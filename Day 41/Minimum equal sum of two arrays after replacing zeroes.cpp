// Question Link:- https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/description/

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0, sum2=0, cnt1=0, cnt2=0;
        
        for(int i=0; i<nums1.size(); i++){
            sum1+=nums1[i];
            if(nums1[i]==0) {
                cnt1++;
                sum1+=1;
            } 
        }
        for(int j=0; j<nums2.size(); j++){
            sum2+=nums2[j];
            if(nums2[j]==0){
                cnt2++;
                sum2+=1;
            }
        }
        if(sum1>sum2 && cnt2==0) return -1;
        else if(sum2>sum1 && cnt1==0) return -1;
        else return max(sum1,sum2);
    }
};
