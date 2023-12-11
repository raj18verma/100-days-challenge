// Question Link:- https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int freq = n/4;
        
        for(int i = 0; i<n-freq; i++) {
            if(arr[i] == arr[i+freq]) {
                return arr[i];
            }   
          
        }
        return -1;    
    }
};
