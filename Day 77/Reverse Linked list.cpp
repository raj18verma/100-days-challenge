// Question Link:- https://www.codingninjas.com/studio/problems/reverse-linked-list_920513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

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

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head==NULL || head->next==NULL) return NULL;

    Node* temp=head;
    Node *prev=NULL;
    while(temp!=NULL){
        Node *front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
