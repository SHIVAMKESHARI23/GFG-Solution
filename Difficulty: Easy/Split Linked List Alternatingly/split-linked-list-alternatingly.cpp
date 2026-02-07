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
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        
        Node*head1=nullptr;
        Node*tail=nullptr;
        Node*head2=nullptr;
        Node*tail2=nullptr;
        Node*temp=head;
        int count=0;
        
        while(temp){
            Node*newnode=new Node(temp->data);
            if(count==0){
                if(head1==nullptr){
                    head1=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
                count=1;
            }
            else{
                if(head2==nullptr){
                    head2=newnode;
                    tail2=newnode;
                }
                else{
                    tail2->next=newnode;
                    tail2=newnode;
                }
                count=0;
            }
            temp=temp->next;
        }
        return {head1,head2};
        
    }
};