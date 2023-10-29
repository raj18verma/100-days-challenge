// Question Link:- https://leetcode.com/problems/poor-pigs/

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int T = minutesToTest / minutesToDie + 1;
        int pigs = 0;

        while (pow(T, pigs) < buckets) {
            pigs++;
        }

        return pigs;     
    }
};

// Best Explanation:- https://youtu.be/YQJLNxveyKg?si=hzn8Q5O20KA3_BAc
