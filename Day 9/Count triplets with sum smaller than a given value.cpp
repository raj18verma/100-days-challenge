// Question Link: https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count=0; 
	    sort(arr,arr+n);
	    
	    for(int i=0; i<n; i++){
	        int j=i+1, k=n-1;
	        while(j<k){
	            int s=arr[i]+arr[j]+arr[k];
	            if(s<sum){
	                count+=(k-j);
	                j++;
	            }else{
	                k--;
	            }
	        }
	    }
	    return count;
	}
};

// Refer this video:- https://youtu.be/YvFtZRjmR0M?si=uIRM4VpTdZ9VP99N
