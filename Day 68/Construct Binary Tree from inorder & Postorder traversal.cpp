// Question Link:- https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        if(inorder.size()!=postorder.size())
        {
            return NULL;
        }
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return function(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        
    }
    TreeNode* function(vector<int>& inorder,int is,int ie,vector<int>& postorder,int ps,int pe,            map<int,int> &mp)
    {
        if(is>ie || ps>pe)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(postorder[pe]);
        int inroot=mp[postorder[pe]];
        int numsleft=inroot-is; /// starting ke x elements jo ki new inorder hain left subtree ka
        root->left=function(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,mp);
        root->right=function(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,mp);
        return root;
    }
};
