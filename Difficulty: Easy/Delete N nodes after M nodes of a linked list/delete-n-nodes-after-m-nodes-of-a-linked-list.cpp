/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

struct Node {
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
Node* linkdelete(Node* head, int n, int m) {
    if (!head || n == 0)
        return head;

    if (m == 0) {
        // delete entire list
        while (head) {
            Node* del = head;
            head = head->next;
            delete del;
        }
        return nullptr;
    }

    Node* curr = head;
    Node* prev = nullptr;
    int count = 0;

    while (curr) {
        // keep m nodes
        if (count < m) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        else {
            // delete n nodes
            for (int i = 0; i < n && curr; i++) {
                Node* del = curr;
                curr = curr->next;
                delete del;
            }
            prev->next = curr;
            count = 0;
        }
    }
    return head;
}

};