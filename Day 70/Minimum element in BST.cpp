// Question Link:- https://www.codingninjas.com/studio/problems/minimum-element-in-bst_8160462?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


/*
 * class Node
 * {
 * public:
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node() : data(0), left(nullptr), right(nullptr){};
 *     Node(int x) : data(x), left(nullptr), right(nullptr) {}
 *     Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
 * };
 */
int minValue(Node* root){
	// Write your code here.
	if(!root) return -1;
	int mini = 0;
	while(root){
		mini = root->data;
		root = root->left;
	}
	return mini;

}
