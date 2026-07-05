/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        Node*newnode=new Node(x);
        
        if(head==nullptr){
            head=newnode;
            return head;
        }
    
        Node*slow=head;
        Node*fast=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
       
       newnode->next=slow->next;
       slow->next=newnode;
        return head;
        
    }
};