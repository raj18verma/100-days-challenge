// Question Link:- https://leetcode.com/contest/biweekly-contest-117/problems/distribute-candies-among-children-i/

class Solution {
public:
    int distributeCandies(int n, int limit) {
    int ans = 0;

    for (int i = 0; i <= min(n, limit); i++) {
        for (int j = 0; j <= min(n - i, limit); j++) {
            int k = n - i - j;
            if (k >= 0 && k <= limit) {
                ans++;
            }
        }
    }

    return ans;
    }
};
