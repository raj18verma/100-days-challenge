// Question Link:- https://leetcode.com/problems/count-beautiful-substrings-i/

class Solution {
public:
    
bool isVowel(char c) {
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
    else return false;
}
    
    int beautifulSubstrings(string s, int k) {
    int n = s.length();
    int count = 0;

    for (int i=0; i<n; i++){
        int vowels=0, consonants=0;

        for (int j=i; j<n; j++){
            if (isVowel(s[j]))
                vowels++;
            else
                consonants++;

            if (vowels==consonants && (vowels*consonants)%k==0){
                count++;
            }
        }
    }

    return count; 
    }
};
