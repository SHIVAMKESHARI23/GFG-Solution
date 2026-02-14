/*

struct Node
{
    int data;
    struct Node* next;

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
    Node* addOne(Node* head1){
        Node*head=reverse(head1);
        Node*prev=nullptr;
        Node*temp=head;
        while(temp){
            prev=temp;
            if(temp->data<9){
                temp->data=temp->data+1;
                break;
            }
            else{
                temp->data=0;
            }
            temp=temp->next;
        }
        
        if(temp==nullptr){
            prev->next=new Node(1);
        }
        head=reverse(head);
        
        return head;
    }
};