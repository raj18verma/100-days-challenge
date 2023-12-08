// Question Link:- https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SOLUTION

/*
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
*/

Node* sortList(Node *head){
    if(!head || !head->next) return head;

    Node* zeroHead=new Node(-1);
    Node* oneHead=new Node(-1);
    Node* twoHead=new Node(-1);

    Node* zero=zeroHead;
    Node* one=oneHead;
    Node* two=twoHead;
    Node* temp=head;

    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next= (oneHead->next) ? (oneHead->next) : (twoHead->next);
    one->next= (twoHead->next);
    two->next= NULL;

    Node* newHead= zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newHead;
}
