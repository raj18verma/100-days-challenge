// Question Link:- https://leetcode.com/problems/high-access-employees/description/

class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        int n = access_times.size();
        sort(access_times.begin() , access_times.end());

        vector<string>ans;
        unordered_map<string , int>mp;
        for(int i = 0; i < n - 2; i++){
            if(mp.find(access_times[i][0]) == mp.end() &&
             access_times[i][0] == access_times[i + 2][0]){
                // calculate time for access_times[i][1]
                int t1 = stoi(access_times[i][1]);

                // calculate time for access_times[i + 2][1]
                int t2 = stoi(access_times[i + 2][1]);

                if(t2 - t1 < 100){
                  i++;
                  ans.push_back(access_times[i][0]);
                  mp[access_times[i][0]]++;
                } 
            }
        }
       return ans;
    }
};

// REFER solution: https://leetcode.com/problems/high-access-employees/solutions/4279191/using-sorting-and-hashmap/
