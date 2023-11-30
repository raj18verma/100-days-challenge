// Question Link:- https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/submissions/1109750956/?envType=daily-question&envId=2023-11-30

class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n == 0) return 0;
        
        vector<long long> function(32, 0);
    
        function[0] = 1;
        for(int i = 1; i <= 31; i++) {
            function[i] = 2*function[i-1] + 1;
        }
        int result = 0;
        int sign  = 1;
        
        for(int i = 30; i >= 0; i--) {
            int ith_bit = ((1 << i) & n);
            if(ith_bit == 0) {
                continue;
            }
            if(sign > 0)
                result += function[i];
            else
                result -= function[i];
            sign *= -1;
        }
        return result;      
    }
};

// yt refer video:- https://youtu.be/yU6DZSLW4_c?si=r5vp4IxHjiUQfy-M
