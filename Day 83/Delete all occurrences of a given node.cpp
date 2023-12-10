// Question Link:- https://www.codingninjas.com/studio/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            if(temp==head) head=temp->next;

            Node* nextNode=temp->next;
            Node* prevNode=temp->prev;
            if(nextNode!=NULL) nextNode->prev=prevNode;
            if(prevNode!=NULL) prevNode->next=nextNode;

            delete (temp);
            temp=nextNode;
        }else{
            temp=temp->next;
        }
    }
    return head;
}
