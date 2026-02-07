class Solution {
  public:
    bool isSorted(Node* head) {
       
        if (head == nullptr || head->next == nullptr)
            return true;

        Node* temp = head;
        int count = 0;
        int count2 = 0;

        while (temp->next != nullptr) {
            if (temp->data > temp->next->data) {
                count++;
            } 
            else if (temp->data < temp->next->data) {
                count2++;
            }

            if (count > 0 && count2 > 0) {
                return false;
            }

            temp = temp->next;
        }
        return true;
    }
};
