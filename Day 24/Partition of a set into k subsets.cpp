// Question Link:- https://practice.geeksforgeeks.org/problems/partition-array-to-k-subsets/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


class Solution{
  public:
  
    void solve(int a[],int n,int k,int currsum,int count,vector<int>&visited,int sum,bool&ans)
    {
        if(count==k-1)
            {
                ans=true;
                return;
            }
            
        if(currsum>sum)
            return;
            
        if(currsum==sum)
            { return solve(a,n,k,0,count+1,visited,sum,ans);
              if(ans==true)
                    return;
            }
            
        for(int i=0;i<n;++i)
        {
            if(visited[i]==false)
            {
                visited[i]=true;
                solve(a,n,k,currsum+a[i],count,visited,sum,ans);
                if(ans==true)
                    return; 
                visited[i]=false;
            }
        }
        
        return;
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
        if(k>n)
            return false;
            
        if(k==1)
            return true;
            
        int sum=0;
        for(int i=0;i<n;++i){
            sum+=a[i];
        }
        
        if(sum%k!=0)
            return false;
            
        vector<int> visited(n,false);
        bool ans=false;
        solve(a,n,k,0,0,visited,sum/k,ans);    
        return ans;
    }
};

// T.C:- O(2^n*n)  S.C:- O(2^n)

// Refer this video:- https://youtu.be/3qN3bonkCG4?si=eW_-wx7PrAGWs9q-
