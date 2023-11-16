// Question Link:- https://leetcode.com/problems/find-unique-binary-string/description/?envType=daily-question&envId=2023-11-16

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string result;
        
        for(int i = 0; i<n; i++) {
            char ch = nums[i][i];
            result += (ch == '0') ? "1" : "0";
        }
        return result;    
    }
};

// yt refer video:- https://youtu.be/8Cay8q3BOx4?si=i7AK3pXIov4CYTHb
