// Question Link:- https://www.codingninjas.com/studio/problems/size-of-largest-bst-in-binary-tree_893103?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
#include <bits/stdc++.h>
class NodeValue{
public:
  int minValue;
  int maxValue;
  int maxSize;

  NodeValue(int minValue,int maxValue,int maxSize) {
      this->minValue=minValue;
      this->maxValue=maxValue;
      this->maxSize=maxSize;
  }
};

NodeValue maxSum(TreeNode* root) {
    if (!root) return NodeValue(INT_MAX,INT_MIN,0);
    auto left =maxSum(root->left);
    auto right =maxSum(root->right);
    if (left.maxValue < root->data && root->data < right.minValue) {
      return NodeValue(min(root->data, left.minValue),
        max(root->data, right.maxValue), left.maxSize + right.maxSize + 1);
    }
    return NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
}

int largestBST(TreeNode* root) {
    return maxSum(root).maxSize;
}
