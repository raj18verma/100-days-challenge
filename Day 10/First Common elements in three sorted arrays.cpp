// Question Link: https://practice.geeksforgeeks.org/problems/common-elements1132/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int , int >mp;

          for(int i=0;i<n1;++i)mp[A[i]]=1;
          for(int i=0;i<n2;++i)if(mp[B[i]]==1)mp[B[i]]++;
          for(int i=0;i<n3;++i)if(mp[C[i]]==2)mp[C[i]]++;

          vector<int> ans;
          for(auto x:mp){
              if(x.second >=3)ans.push_back(x.first);
          }

          sort(ans.begin(), ans.end());
          return ans;
        }

};

// Refer yt video: https://youtu.be/ajWCEu1razQ?si=x-mEJ--CJq5pV28Z
