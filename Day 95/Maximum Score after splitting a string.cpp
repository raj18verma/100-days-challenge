// Question Link:- https://leetcode.com/problems/maximum-score-after-splitting-a-string/

class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int ans=INT_MIN;

        int zeros=0;
        int ones=0;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == '1') {
                ones++;
            } else {
                zeros++;
            }
            ans=max(ans,zeros-ones);
        }
        if(s[n-1] == '1') {
            ones++;
        }
        return ans+ones;   
    }
};


// For all 3 approaches:- https://youtu.be/H618dJqxpsM?si=4GQCDfRNOp6BqKhD
