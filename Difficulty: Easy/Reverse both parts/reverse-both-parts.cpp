class Solution {
  public:
  
    // Function to reverse a linked list
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  
    Node *reverse(Node *head, int k) {
        
        if(head == NULL)
            return NULL;
        
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        
        // Move to kth node
        while(count < k && curr != NULL) {
            curr = curr->next;
            count++;
        }
        
        // Split the list
        Node* secondHead = curr->next;
        curr->next = NULL;
        
        // Reverse both parts
        Node* firstPart = reverseList(head);
        Node* secondPart = reverseList(secondHead);
        
        // Connect both reversed parts
        head->next = secondPart;
        
        return firstPart;
    }
};
