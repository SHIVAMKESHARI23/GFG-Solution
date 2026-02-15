class Solution {
  public:
    Node* sortedMerge(Node* head, Node* head2) {
        
        if(head == nullptr) return head2;
        if(head2 == nullptr) return head;
        
        Node* temp = head;
        Node* temp2 = head2;
        Node* newhead = nullptr;
        Node* tail = nullptr;
        
        while(temp && temp2){
            
            Node* chosen = nullptr;
            
            if(temp->data < temp2->data){
                chosen = temp;
                temp = temp->next;
            }
            else{
                chosen = temp2;
                temp2 = temp2->next;
            }
            
            if(newhead == nullptr){
                newhead = chosen;
                tail = chosen;
            }
            else{
                tail->next = chosen;
                tail = chosen;   
            }
        }
        
        // Attach remaining part
        if(temp) tail->next = temp;
        if(temp2) tail->next = temp2;
        
        return newhead;
    }
};
