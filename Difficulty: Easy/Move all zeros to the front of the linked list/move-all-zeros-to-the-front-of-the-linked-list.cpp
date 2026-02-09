/* Linked List Node structure
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
    void moveZeroes(struct Node*& head) {
        // code here
        Node*newhead=nullptr;
        Node*tail=nullptr;
        Node*temp=head;
        while(temp){
                Node*newnode = new Node(temp->data);
            if(temp->data==0){
                 if(newhead==nullptr){
                    newhead=newnode;
                    tail=newnode;
                    
                }
                else{
                    newnode->next=newhead;
                    newhead=newnode;
                    
                    
                }
                
            }
            else{
                if(newhead==nullptr){
                    newhead=newnode;
                    tail=newnode;
                    
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                    
                }
            }
            temp=temp->next;
        }
        head=newhead;;
    }
};