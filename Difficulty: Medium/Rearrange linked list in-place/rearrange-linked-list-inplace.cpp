/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  Node*reverse(Node*head){
      Node*prev=nullptr;
      Node*curr=head;
      while(curr){
          Node*nextnode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextnode;
      }
      return prev;
  }
    Node *inPlace(Node *root) {
        // Code here
        if(root==nullptr||root->next==nullptr)return root;
        Node*slow=root;
        Node*fast=root;
        while(fast&&fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*temp2=reverse(slow->next);
        slow->next=nullptr;
        Node*temp=root;
        while(temp2){
            Node*nextnode=temp->next;
            Node*nextnode2=temp2->next;
            
            temp->next=temp2;
            temp2->next=nextnode;
            
            temp=nextnode;
            temp2=nextnode2;
            
        }
        
       
        return root;
    }
};