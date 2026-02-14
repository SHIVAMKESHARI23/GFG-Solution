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
    Node* intersectPoint(Node* head, Node* head2) {
        //  Code Here
        if(head==nullptr || head2==nullptr){
            return nullptr;
        }
        
        Node*temp=head;
        Node*temp2=head2;
        while(temp!=temp2){
        
            temp=temp==nullptr?head2:temp->next;
            temp2=temp2==nullptr?head:temp2->next;
            
        }
        
        return temp;
    }
};