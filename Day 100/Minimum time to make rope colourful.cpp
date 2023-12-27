// Question link:- https://leetcode.com/problems/minimum-time-to-make-rope-colorful/

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int time    = 0;
        int prevMax = 0;
        
        for(int i = 0; i<n; i++) {
            if(i > 0 && colors[i] != colors[i-1]) {
                prevMax = 0;
            }
            
            int curr = neededTime[i];
            time += min(prevMax, curr);
            prevMax = max(prevMax, curr);   
        }
        return time;   
    }
};


//yt refer video:- https://youtu.be/_xNrzKfORNA?si=ohO97QmtMjPLw7Xp
