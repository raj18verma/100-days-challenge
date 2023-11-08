//Question Link:- https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/description/

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int vert_dist = abs(sy-fy);
        int hor_dist  = abs(sx-fx);
        
        if(vert_dist == 0 && hor_dist == 0 && t == 1) return false;
        return t >= max(vert_dist, hor_dist);      
    }
};

// yt refer video:- https://youtu.be/1k5-LnJlH78?si=B24wF428c8jjUSdn
