// Question Link:- https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> theArray;
    void inorder(TreeNode *root){
        if(root){
            inorder(root->left);
            theArray.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int low = 0;
        int high = theArray.size()-1;
        while(low < high){
            if(theArray[low] + theArray[high] == k) return true;
            else if(k > theArray[low] + theArray[high]) low++;
            else high--;
        }
        return false;   
    }
};
