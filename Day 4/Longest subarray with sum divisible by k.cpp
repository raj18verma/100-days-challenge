// Question Link:- https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
        unordered_map<int,int>m;
	    int ans = 0;
	   
	    
	    m.insert({0,-1}); 
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];  
	        int rem = sum%k; 
	        if(rem<0)rem+=k;
	        
	        if(m.find(rem)==m.end())      //not seen before in map
	        m.insert({rem,i});
	        else ans = max(ans,i-m[rem]); //seen remainder in map
	    }
	    
	    return ans;
	}
};

// Refer this video:- https://youtu.be/hviDtcBVpho?si=3lEmKg8t8kOSDTIZ
