// Question Link: https://www.codingninjas.com/studio/problems/tree-traversals_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

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
void inOrderTrav(TreeNode * curr, vector < int > & inOrder) {
  if (curr == NULL)
    return;

  inOrderTrav(curr -> left, inOrder);
  inOrder.push_back(curr -> data);
  inOrderTrav(curr -> right, inOrder);
}
void preOrderTrav(TreeNode * curr, vector < int > & preOrder) {
  if (curr == NULL)
    return;

  preOrder.push_back(curr -> data);
  preOrderTrav(curr -> left, preOrder);
  preOrderTrav(curr -> right, preOrder);
}
void postOrderTrav(TreeNode * curr, vector < int > & postOrder) {
  if (curr == NULL)
    return;

  postOrderTrav(curr -> left, postOrder);
  postOrderTrav(curr -> right, postOrder);
  postOrder.push_back(curr -> data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here
    vector<int> inOrder, preOrder, postOrder;
    
    inOrderTrav(root, inOrder);
    preOrderTrav(root, preOrder);
    postOrderTrav(root, postOrder);

    vector<vector<int>>ans;
    ans.push_back(inOrder);
    ans.push_back(preOrder);
    ans.push_back(postOrder);

    return ans;
}
