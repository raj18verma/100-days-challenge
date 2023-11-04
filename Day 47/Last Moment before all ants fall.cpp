// Question Link:- https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int result = 0;
        for(int &x : left) {
            result = max(x, result);
        }
        for(int &x : right) {
            result = max(result, n-x);
        }
        return result;   
    }
};

// YT refer video:- https://youtu.be/JaJkEI-0zdI?si=Gr-yj9UzeZ7iSiSz
