// Question Link:- https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/?envType=daily-question&envId=2023-11-14

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        unordered_set<char> unique_letters;
        
        for(char &ch : s) {
            unique_letters.insert(ch);
        }
        int result = 0;
        for(char letter : unique_letters) {
            int first_idx = -1;
            int last_idx  = -1;
            
            for(int i = 0; i<n; i++) {
                if(s[i] == letter) {
                    if(first_idx == -1) {
                        first_idx = i;
                    }
                    last_idx = i;   
                }
            }               
            unordered_set<char> st;
            for(int middle = first_idx+1; middle <= last_idx-1; middle++) {
                st.insert(s[middle]);
            }
            result += st.size();   
        }
        return result;
    }
};

// yt refer video:- https://youtu.be/EdEvy2_o5OE?si=CE4JZ9BGmlaLFWKB
