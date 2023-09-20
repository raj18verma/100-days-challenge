// Question Link:- https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1); // Initialize result array with 1s

        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] *= leftProduct; // Multiply by left product
            leftProduct *= nums[i];  // Update left product
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= rightProduct; // Multiply by right product
            rightProduct *= nums[i];  // Update right product
        }

        return result;
    }
};

// T.C:- O(n) S.C:- O(n) 



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        if(n<1)
            return output;
        
        int product = 1;
        for(int i=0;i<n;++i)
        {
            product *= nums[i];
            output.push_back(product);            
        }
        
        //Traverse from right and update output array
        product = 1;
        for(int i=n-1;i>0;--i)
        {
            output[i] = output[i-1]*product;
            product *= nums[i];
        }
        output[0] = product;
        
        return output;
    }
};


// T.C:- O(n) and S.C:- O(1)
