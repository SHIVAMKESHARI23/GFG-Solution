class Solution {
  public:
    Node *rotateDLL(Node *head, int k) {
        
        if(head == NULL || k == 0) 
            return head;
        
        Node* temp = head;
        int size = 0;
        while(temp){
            size++;
            temp = temp->next;
        }
        
        k = k % size;
        if(k == 0) return head;
        
        temp = head;
        Node* prev = NULL;
        int count = 0;
        
        while(count < k){
            prev = temp;
            temp = temp->next;
            count++;
        }
        
        prev->next = NULL;
        temp->prev = NULL;
        
        Node* newHead = temp;
        
        Node* curr = temp;
        while(curr->next){
            curr = curr->next;
        }
        
        curr->next = head;
        head->prev = curr;
        
        return newHead;
    }
};
