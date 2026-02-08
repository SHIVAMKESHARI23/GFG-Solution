/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        Node* newnode = new Node(val);

        if(pos == 1 || head == NULL){
            newnode->next = head;
            return newnode;
        }

        Node* temp = head;
        int count = 1;

        while(temp != NULL && count < pos - 1){
            temp = temp->next;
            count++;
        }

        if(temp == NULL) return head;   // position out of range

        newnode->next = temp->next;
        temp->next = newnode;

        return head;
    }
};
