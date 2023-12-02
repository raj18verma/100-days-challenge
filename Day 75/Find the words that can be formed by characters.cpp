// Question Link:- https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>ans(26, 0);
        
        for(char &ch : chars) ans[ch-'a']++;
        
        int result = 0;
        
        for(string &word : words) {
            
            vector<int>words(26, 0);
        
            for(char &ch : word) words[ch-'a']++;
            
            bool flag=true;
            for(int i=0; i < 26; i++) {
                if(words[i]>ans[i]) {
                    flag=false;
                    break;
                }
            }
            if(flag==true) result += word.size();
        }
        return result;      
    }
};
