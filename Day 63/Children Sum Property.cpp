// Question Link:-  https://www.codingninjas.com/studio/problems/children-sum-property_8357239?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
pair<bool,int> fast_parentSum(Node * root){

    if(root == NULL ){

        pair<bool,int> p = make_pair(true,0);

        return p;

 

    }

    if((root->left == NULL and root->right == NULL)){

        pair<bool,int> p = make_pair(true,root->data);

        return p;

    }

    

    pair<bool,int> left = fast_parentSum(root->left);

   

    pair<bool,int> right = fast_parentSum(root->right);

    pair<bool,int> ans;

  

    if( left.first && right.first and root->data == left.second + right.second){

        ans.first = true;

    }

    ans.second = root->data;

    return ans;

    

}

bool isParentSum(Node *root){

    // Write your code here.

    return fast_parentSum(root).first;

    

}
