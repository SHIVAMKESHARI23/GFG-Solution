class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {

        unordered_set<int> st;

        // store elements of first list
        Node* temp = head2;
        while (temp) {
            st.insert(temp->data);
            temp = temp->next;
        }

        Node* newhead = nullptr;
        Node* tail = nullptr;

        // traverse second list
        temp = head1;
        while (temp) {
            if (st.find(temp->data) != st.end()) {
                Node* newnode = new Node(temp->data);

                if (!newhead) {
                    newhead = newnode;
                    tail = newnode;
                } else {
                    tail->next = newnode;
                    tail = newnode;
                }
            }
            temp = temp->next;
        }

        return newhead;
    }
};
