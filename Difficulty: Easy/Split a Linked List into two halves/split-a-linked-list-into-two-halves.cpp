/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
    if (head == nullptr)
        return {nullptr, nullptr};

    int count = 1;
    Node* temp = head->next;
    vector<int> arr;
    vector<int> nums;

    // count nodes (circular list)
    while (temp != head) {
        count++;
        temp = temp->next;
    }

    // reset temp
    temp = head;

    int firstSize = (count + 1) / 2;  // first list gets extra node

    // split based on count
    for (int i = 0; i < count; i++) {
        if (i < firstSize) {
            nums.push_back(temp->data);
        } else {
            arr.push_back(temp->data);
        }
        temp = temp->next;
    }

    Node* newhead = nullptr;
    Node* newhead2 = nullptr;
    Node* tail = nullptr;
    Node* tail2 = nullptr;

    // build first list
    for (int i = 0; i < nums.size(); i++) {
        Node* newnode = new Node(nums[i]);
        if (newhead == nullptr) {
            newhead = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // build second list
    for (int i = 0; i < arr.size(); i++) {
        Node* newnode2 = new Node(arr[i]);
        if (newhead2 == nullptr) {
            newhead2 = newnode2;
            tail2 = newnode2;
        } else {
            tail2->next = newnode2;
            tail2 = newnode2;
        }
    }

    // make both lists circular
    if (tail) tail->next = newhead;
    if (tail2) tail2->next = newhead2;

    return {newhead, newhead2};
}

};