// Question Link:- https://www.codingninjas.com/studio/problems/predecessor-and-successor-in-bst_893049?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/
pair<int, int> predecessorSuccessor(TreeNode *root, int key){
    int pred = -1;
    int succ = -1;

    TreeNode* temp = root;
    while(temp && temp->data != key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    if(temp){
        // predecessor
        TreeNode* leftTree = temp->left;
        while(leftTree){
            pred = leftTree->data;
            leftTree = leftTree->right;
        }

        // successor
        TreeNode* rightTree = temp->right;
        while(rightTree){
            succ = rightTree->data;
            rightTree = rightTree->left;
        }
    }

    return {pred, succ};
}
