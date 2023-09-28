// Question Link:- https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
     if(n==1)
     return arr[0];
     int prev=arr[0];
     int prev1=max(arr[0],arr[1]);
     int curr=0;
     for(int i=2;i<n;i++)
     {
       curr=max(prev1,prev+arr[i]);
       prev=prev1;
       prev1=curr;
     }
     return prev1;
    }
};
