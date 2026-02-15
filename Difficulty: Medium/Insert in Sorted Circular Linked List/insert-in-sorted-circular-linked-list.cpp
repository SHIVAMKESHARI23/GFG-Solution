class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        
        Node* newnode = new Node(data);
        
        if(head == nullptr){
            newnode->next = newnode;
            return newnode;
        }
        
        Node* temp = head;
      
        if(data <= head->data){
            
            
            while(temp->next != head){
                temp = temp->next;
            }
            
            temp->next = newnode;
            newnode->next = head;
            head = newnode;
            
            return head;
        }
        

        while(temp->next != head && temp->next->data < data){
            temp = temp->next;
        }
        
        newnode->next = temp->next;
        temp->next = newnode;
        
        return head;
    }
};
