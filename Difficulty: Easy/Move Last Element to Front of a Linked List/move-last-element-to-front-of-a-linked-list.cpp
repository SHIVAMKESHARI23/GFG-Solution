// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node*temp=head;
        Node*prev=nullptr;
        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next=head;
        head=temp;
        return head;
        
    }
};