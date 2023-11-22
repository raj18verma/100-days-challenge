// Question Link:- https://www.codingninjas.com/studio/problems/time-to-burn-tree_1469067?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<map>
BinaryTreeNode<int>* createMapping(BinaryTreeNode<int>* root,int target,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &nodeKaParent){
    BinaryTreeNode<int>* res = NULL;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    nodeKaParent[root] = NULL;
    while(!q.empty()){
        BinaryTreeNode<int>* front = q.front();
        q.pop();

        if(front->data == target){
            res = front;
        }

        if(front->left){
            nodeKaParent[front->left] = front;
            q.push(front->left);
        }

        if(front->right){
            nodeKaParent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int startTheBurning(BinaryTreeNode<int>* target,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &nodeKaParent){
    map<BinaryTreeNode<int>*,bool> visited;
    int ans = 0;
    queue<BinaryTreeNode<int>*> q;
    q.push(target);
    visited[target] = true;
    while(!q.empty()){
        int size = q.size();
        bool add = false;
        for(int i=0;i<size;i++){
            BinaryTreeNode<int>* front = q.front();
            q.pop();
            if(front->left && !visited[front->left]){
                add = 1;
                q.push(front->left);
                visited[front->left] = true;
            }
            if(front->right && !visited[front->right]){
                add = 1;
                q.push(front->right);
                visited[front->right] = true;
            }
            if(nodeKaParent[front] && !visited[nodeKaParent[front]]){
                add = 1;
                q.push(nodeKaParent[front]);
                visited[nodeKaParent[front]] = true;
            }
        }
        if(add == true){
            ans++;
        }
    }
    return ans;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> nodeKaParent;
    BinaryTreeNode<int>* target = createMapping(root,start,nodeKaParent);
    int ans = startTheBurning(target,nodeKaParent);
    return ans;
}
