// User function template for C++

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
    Node* divide(Node* head) {
        // code here
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        Node*evenstr=nullptr;
        Node*evenend=nullptr;
        Node*oddstr=nullptr;
        Node*oddend=nullptr;
        Node*curr=head;
        while(curr){
            if(curr->data%2==0){
                if(evenstr==nullptr){
                    evenstr=evenend=curr;
                }
                else{
                    evenend->next=curr;
                    evenend=curr;
                    
                }
            }
            else{
                if(oddstr==nullptr){
                    oddstr=oddend=curr;
                    
                }
                else{
                    oddend->next=curr;
                    oddend=curr;
                }
            }
            curr=curr->next;
        }
        if(evenstr==nullptr){
            return head;
        }
        evenend->next=oddstr;
        if(oddend!=nullptr){
            oddend->next=nullptr;
        }
        return evenstr;
    }
};