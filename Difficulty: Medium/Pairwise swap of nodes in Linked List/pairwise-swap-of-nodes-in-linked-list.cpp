/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *pairwiseSwap(Node *head) {
        // code here
        Node*dummy=new Node(0);
        dummy->next=head;
        
        Node*prev=dummy;
        Node*curr=head;
        while(curr&&curr->next){
            Node*nextpair=curr->next->next;
            Node*second=curr->next;
            second->next=curr;
            curr->next=nextpair;
            prev->next=second;
            prev=curr;
            curr=nextpair;
            
        }
        
        
        return dummy->next;
        
    }
};