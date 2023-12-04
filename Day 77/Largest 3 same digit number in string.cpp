// Question Link:- https://leetcode.com/problems/largest-3-same-digit-number-in-string/

class Solution {
public:
    string largestGoodInteger(string num) {
        char maxi=' ';
        for(int i=2; i<num.size(); i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                maxi=max(maxi,num[i]);
            }
        }
        if (maxi==' ') return "";
        else return string (3,maxi);
    }
};
