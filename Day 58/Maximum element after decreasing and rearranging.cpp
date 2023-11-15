// Question Link:- https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/description/?envType=daily-question&envId=2023-11-15

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int n = arr.size();
        int maxEl = 1;

        for(int i = 0; i < n; i++) {
            if(i == 0) {
                arr[i] = 1;
            } else if(arr[i] - arr[i-1] > 1) {
                arr[i] = arr[i-1] + 1;
            }
            maxEl = max(maxEl, arr[i]);
        }
        return maxEl;
    }
};

// yt refer video:- https://youtu.be/HGkK9n5CUaY?si=3dclIExWVmzMv-nZ
