// Question Link:- https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int cnt=0,diff;
        for(int i=0;i<seats.size();i++){
            diff = max(seats[i],students[i]) - min(seats[i],students[i]);
            cnt+=diff;
        }
        return cnt;
    }
};
