// Question Link: https://leetcode.com/problems/eliminate-maximum-number-of-monsters/description/?envType=daily-question&envId=2023-11-07

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int>time(n);
        
        for (int i = 0; i < n; i++)  time[i] = ceil((float)dist[i]/speed[i]);
        sort(time.begin(),time.end());

        int count = 1;
        
        int timePassed = 1;
        for (int i = 1; i < n; i++) {
            if (time[i]-timePassed <= 0) {
                return count;
            }
            count++;
            timePassed++;
        }
        return count;
    }
};

// YT refer video:- https://youtu.be/T67MicJdTug?si=Qt6jb1Qmihr4-Wu2
