// Question Link:- https://www.codingninjas.com/studio/problems/ceil-from-bst_920464?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

#include <bits/stdc++.h> 
int findCeil(BinaryTreeNode<int> *root, int x){
    int ceil = -1;
    if(!root) return -1;
    while(root){
        if(root->data == x) return root->data;
        if(x > root->data) root = root->right;
        else{
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}
