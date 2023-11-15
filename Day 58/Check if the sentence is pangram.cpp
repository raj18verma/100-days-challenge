// Question Link:- https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);
        bool flag=true;
        for(int i=0; i<sentence.size(); i++){
            alpha[sentence[i]-'a']=1;  // int index=sentence[i]-'a'
        }

        for(int i=0; i<26; i++){
            if(alpha[i]==0){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
