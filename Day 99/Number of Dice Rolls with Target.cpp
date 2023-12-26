// Question Link:- https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/submissions/1128535027/?envType=daily-question&envId=2023-12-26

class Solution {
public:
    int mod=1e9+7;
    int func(int n, int k, int target,vector<vector<int>>& dp){
        if(n==0 && target==0) return 1;
        if(n<=0 || target<=0) return 0;
        if(dp[n][target]!=-1) return dp[n][target];

        int res=0;
        for(int i=1;i<=k;i++){
            res=(res+func(n-1,k,target-i,dp))%mod;
        }
        return dp[n][target]=res;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return func(n,k,target,dp);
    }
};
