// Question Link:- https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=SUBMISSION

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
{
	//Write your code here
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
