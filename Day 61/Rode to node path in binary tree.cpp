// Question Link:- https://www.codingninjas.com/studio/problems/all-root-to-leaf-paths-in-binary-tree._983599?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/********************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        int data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
    
********************************************************************/
void solve(BinaryTreeNode<int> *root, vector<string> &ans, string res) {
    if (!root)
        return;


    if (!root->left&& !root->right) {
      res+=to_string(root->data);
        ans.push_back(res);
        return;
    }
  res+=to_string(root->data)+" ";
   solve(root->left, ans, res);
   solve(root->right, ans, res);

}

vector<string> allRootToLeaf(BinaryTreeNode<int> *root) {
    vector<string> ans;
    if (!root)
   { return ans;
   }
    solve(root, ans, "");
    return ans;
}
