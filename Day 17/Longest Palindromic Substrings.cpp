// Question Link:- https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    string longestPalindrome(string S) {
        int start = 0;
        int maxLen = 1;
        
        for (int i = 1; i < S.length(); i++) {
            // Even-length palindrome
            int l = i - 1;
            int r = i;
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
            
            // Odd-length palindrome
            l = i - 1;
            r = i + 1;
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }
        return S.substr(start, maxLen);    
    }
};
//Refer yt video: https://youtu.be/pVs1RjhmHwU?si=C9vYzoBpK8s71VKR
