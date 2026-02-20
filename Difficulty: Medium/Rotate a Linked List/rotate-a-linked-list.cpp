/*
class Node {
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
    Node* rotate(Node* head, int k) {
        // code here
        Node*curr=head;
        int count=1;
        while(curr->next){
            curr=curr->next;
            count++;
        }
        k=k%count;
        if(k==0)return head;
        curr->next=head;
        Node*temp=head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        Node*newhead=temp->next;
        temp->next=nullptr;
        return newhead;
    }
};