// Question Link:- https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/1019034264/

class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (nums[mid] == target) return mid;

        //if left part is sorted:
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target <= nums[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (nums[mid] <= target && target <= nums[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1; 
    }
};

// Refer this article:= https://takeuforward.org/data-structure/search-element-in-a-rotated-sorted-array/
