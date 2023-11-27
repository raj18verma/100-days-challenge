// Question Link:- https://www.codingninjas.com/studio/problems/floor-from-bst_625868?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int Floor(BinaryTreeNode<int> *node, int input)
{
	int floor = -1;
	if(!node) return -1;
	while(node){
		if(input == node->data) return node->data;
		else if(input < node->data) node = node->left;
		else{
			floor = node->data;
			node = node->right;
		}
	}
	return floor;
}
