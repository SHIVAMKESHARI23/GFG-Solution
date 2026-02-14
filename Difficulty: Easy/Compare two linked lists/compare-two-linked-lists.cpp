/* Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};
*/

// Compare two strings represented as linked lists
class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        // Code Here
        int count=0;
        Node*temp=head1;
        Node*temp2=head2;
        while(temp&&temp2){
            if(temp->data>temp2->data){
                count=1;
                break;
            }
            else if(temp->data<temp2->data){
                count=-1;
                break;
            }
            temp=temp->next;
            temp2=temp2->next;
            
            
        }
        if(temp==nullptr&&temp2!=nullptr){
            return -1;
            
        }
        if(temp2==nullptr&&temp!=nullptr){
            return 1;
            
        }
        
        return count;
    }
};