/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        Node*slow=head;
        Node*fast=head->next;
        while(fast!=head&&fast->next!=head){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*head1_ref=head;
        Node*head2_ref=slow->next;
        slow->next=head1_ref;
        Node*curr=head2_ref;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=head2_ref;
        return{head1_ref,head2_ref};
        }
};