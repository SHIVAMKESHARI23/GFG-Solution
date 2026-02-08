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
    Node* removeLastNode(Node* head) {
        // code here
        if(head==nullptr||head->next==nullptr){
            return nullptr;
        
            
        }
        Node*prev=nullptr;
        Node*temp=head;
        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;
        }
        prev->next=nullptr;
        return head;
    }
};