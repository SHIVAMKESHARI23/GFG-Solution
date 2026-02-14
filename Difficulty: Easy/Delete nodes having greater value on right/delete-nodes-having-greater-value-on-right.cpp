class Solution {
  public:

    Node* reverse(Node* head){
        Node* prev = nullptr;
        Node* curr = head;

        while(curr){
            Node* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }

    Node *compute(Node *head) {
        
        if(head == nullptr || head->next == nullptr)
            return head;

      
        head = reverse(head);

        Node* curr = head;
        int maxVal = curr->data;

       
        while(curr && curr->next){
            
            if(curr->next->data < maxVal){
                Node* del = curr->next;
                curr->next = del->next;
                delete del;
            }
            else{
                curr = curr->next;
                maxVal = curr->data;
            }
        }

        
        return reverse(head);
    }
};
