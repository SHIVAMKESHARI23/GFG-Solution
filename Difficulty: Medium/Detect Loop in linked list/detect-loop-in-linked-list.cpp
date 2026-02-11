/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        if(head==nullptr||head->next==nullptr)return false;
       Node*temp=head;
       Node*slow=head;
       while(temp&&temp->next!=nullptr){
           slow=slow->next;
           temp=temp->next->next;
           if(slow==temp){
               return true;
           }
       }
       return false;
    }
};