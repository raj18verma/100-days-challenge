// Question Link:- https://leetcode.com/problems/find-the-winner-of-an-array-game/description/

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int maxEl = *max_element(begin(arr), end(arr));
        if(k >= n) return maxEl;
        int winner=arr[0];
        int wins=0;
        
        for(int i = 1; i<n; i++) {
            if(winner > arr[i]) wins++;
                else {
                winner = arr[i];
                wins   = 1;
            }
            if(wins == k || winner == maxEl) return winner;   
        }
        return winner;    
    }
};

// YT refer video:- https://youtu.be/0pnrbej1_xM?si=V-8SBQlrPrUuwMJd
