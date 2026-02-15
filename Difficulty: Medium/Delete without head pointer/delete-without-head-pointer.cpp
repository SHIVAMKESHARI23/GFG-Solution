/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* del_node) {
        
        // code here
        Node*temp=del_node;
        if(temp==nullptr||temp->next==nullptr){
            return ;
        }
        Node*nextnode=del_node->next;
        
        temp->data=nextnode->data;
        temp->next=nextnode->next;
        
        delete nextnode;
    }
};