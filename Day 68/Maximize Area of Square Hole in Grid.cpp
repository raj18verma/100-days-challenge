// Question Link:- https://leetcode.com/problems/maximize-area-of-square-hole-in-grid/

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int cnt=0;
        int a=1,b=1,c=0,d=0;
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        for(int i=1;i<hBars.size();i++)
        {
            if(hBars[i]-hBars[i-1]==1){
                a++;
            }
            else {
                c=max(a,c);
                a=1;
            }
        }
        c=max(a,c);
        for(int i=1;i<vBars.size();i++)
        {
            if(vBars[i]-vBars[i-1]==1){
                b++;
            }
            else {
                d=max(d,b);
                b=1;
            }
        }
        d=max(d,b);
        cnt=min(c,d);
        return (cnt+1)*(cnt+1);
    }
};
