// Question Link:- https://www.codingninjas.com/studio/problems/insert-at-end-of-doubly-linked-list_8160464?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node* insertAtTail(Node* head, int k) {
    // Write your code here
    if(head==NULL){
        head=new Node(k);
        return head;
    }

    Node *tail=head;

    while(tail->next!=NULL){
        tail=tail->next;
    }

    tail->next=new Node(k,tail,NULL);
    return head;

}
