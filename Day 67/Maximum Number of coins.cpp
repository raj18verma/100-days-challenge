// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/submissions/1105506355/?envType=daily-question&envId=2023-11-24

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(begin(piles), end(piles));
        int result = 0;
        for(int i = n/3; i <n; i+=2) {
            result += piles[i];
        }
        return result;    
    }
};
