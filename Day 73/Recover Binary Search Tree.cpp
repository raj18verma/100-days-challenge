// Question Link:- https://leetcode.com/problems/recover-binary-search-tree/solutions/3611908/

/**                                                    BRUTEFORCE APPROACH
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

    void callin(vector<int>&in , TreeNode* root)
    {
        if(root==NULL) return;
        callin(in,root->left);
        in.push_back(root->val);
        callin(in,root->right);
    }
    int i=0;
    void check(vector<int>&in,TreeNode* root)
    {
        if(root==NULL) return;
        check(in,root->left);
        if(root->val!=in[i])
        {
            swap(root->val,in[i]);
        }
        i++;
        check(in,root->right);
    }
    void recoverTree(TreeNode* root) {
        vector<int> in;
        callin(in, root);
        // vector<int> incopy=in;
        sort(in.begin(),in.end());
        // in sorted h incopy ni h
        check(in,root);
    }
};



/**                                                                      OPTIMAL
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

TreeNode *first;
TreeNode *prev;
TreeNode *middle;
TreeNode *last;

void inorder(TreeNode *root){
    if(root == NULL) return;
    inorder(root->left);

    if(root!=NULL && (root->val <prev->val)){
        if(first==NULL){
            first=prev;
            middle=root;
        }else last=root;
    }
    prev=root;
    inorder(root->right);
}

    void recoverTree(TreeNode* root) {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        if(first && last) swap(first->val, last->val);
        else if(first && middle) swap(first->val, middle->val);
    }
};


