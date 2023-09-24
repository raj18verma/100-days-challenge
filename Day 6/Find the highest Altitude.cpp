// Question Link:- https://leetcode.com/problems/find-the-highest-altitude/description/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int gains = gain.size();
        int curr = 0;
        int maxi = 0;
        for(int i=0; i<gains; i++){
            curr += gain[i];
            maxi = max(maxi,curr);
        }
        return maxi;   
    }
};
