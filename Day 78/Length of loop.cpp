// Question Link:- https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
int findLength(Node *slow, Node *fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}


int lengthOfLoop(Node *head) {
    // Write your code here
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findLength(slow,fast);
        }
    }
    return 0;
}
