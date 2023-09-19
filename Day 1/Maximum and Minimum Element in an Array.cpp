// Question Link:- https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
   public:
    int findSum(int A[], int n)
    {
    	//code here.
    	int maxi=INT_MIN;
    	int mini=INT_MAX;
    	int ans;
    	
    	for(int i=0; i<n; i++){
    	    if(A[i]>maxi){
    	        maxi=A[i];
    	    }
    	    if(A[i]<mini){
    	        mini=A[i];
    	    }
    	}
    	ans=mini+maxi;
    	
    	return ans;
    }
};


// Refer the article:- https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
