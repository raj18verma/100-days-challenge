// Question Link:- https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;

        for(auto x:strs){
            string temp=x;
            sort(x.begin(),x.end());
            umap[x].push_back(temp);
        }     
        for(auto x: umap){
            vector<string>temp=x.second;
            ans.push_back(temp);
        }
        return ans;
    }
};

// Refer this video: https://youtu.be/zX9k1XvVUXI?si=yYE44-mv9kbbvfg2
