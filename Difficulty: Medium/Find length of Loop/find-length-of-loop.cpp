/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        // int count=0;
        if(head==nullptr||head->next==nullptr){
            return 0;
            
        }
        
        Node*slow=head;
        
        Node*fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        
        if(slow!=fast||fast==nullptr||fast->next==nullptr){
            return 0;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            
        }
        int count=1;
        while(fast->next!=slow){
            fast=fast->next;
            count++;
        }
        return count;
        
    }
};