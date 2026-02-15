/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
       int count=0;
       int count1=0;
       int count2=0;
       Node*temp=head;
       while(temp){
           if(temp->data==0){
               count++;
               
           }
           else if(temp->data==1){
               count1++;
           }
           else{
               count2++;
               
           }
           temp=temp->next;
       }
       temp=head;
       int i=0;
       while(i<count){
           temp->data=0;
           temp=temp->next;
           i++;
       }
       i=0;
       while(i<count1){
           temp->data=1;
           temp=temp->next;
           i++;
       }
       i=0;
       while(i<count2){
           temp->data=2;
           temp=temp->next;
           i++;
       }
       return head;
    }
};