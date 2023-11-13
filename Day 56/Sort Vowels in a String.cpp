// Question Link:- https://leetcode.com/problems/sort-vowels-in-a-string/submissions/1097948713/?envType=daily-question&envId=2023-11-13

class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    string sortVowels(string s) {
        unordered_map<char, int> mp;
        for(char &ch : s) {
            if(isVowel(ch)) {
                mp[ch]++;
            }
        }
        string temp   = "AEIOUaeiou";
        int j = 0; //pointing to temp (current vowel)
        
        for(int i = 0; i<s.length(); i++) {
            if(isVowel(s[i])) {
                while(mp[temp[j]] == 0) {
                    j++;
                }
                s[i] = temp[j];
                mp[temp[j]]--;
            }  
        }
        return s;
    }
};

// YT refer video: https://youtu.be/nEDXPkGsjXo?si=BPJcEayYgrciGGUg

