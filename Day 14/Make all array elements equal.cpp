// Question Link:- https://www.geeksforgeeks.org/make-array-elements-equal-minimum-cost/

class Solution {
public:

    long long getCost(vector<int>& nums, vector<int>& cost, int target) {
        long long result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            result += (long long) abs(nums[i] - target) * cost[i];
        }
        return result;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long answer = INT_MAX;
        
        int left = *min_element(nums.begin(), nums.end());  //1
        int right = *max_element(nums.begin(), nums.end()); //5
        
        while (left <= right) {
            int mid = left + (right-left)/2;
            
            long long cost1 = getCost(nums, cost, mid);
            long long cost2 = getCost(nums, cost, mid + 1);
            
            answer = min(cost1, cost2);
            if (cost1 > cost2)
                left = mid + 1;
            else
                right = mid-1;
        }
        if(answer==INT_MAX){
            return 0;
        }else{
            return answer;
        }
        // return answer == INT_MAX ? 0 : answer;  
    }
};
// T.C:- O(nlogn)  and S.C:- O(1)

// Refer yt video:- https://youtu.be/lGo6E8jiDB8?si=h47XgrsCOu-GTG6q
