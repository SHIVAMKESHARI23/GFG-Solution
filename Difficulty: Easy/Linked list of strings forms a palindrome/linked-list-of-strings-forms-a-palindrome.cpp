/*
The structure of linked list is the following
struct Node {
    string data;
    Node *next;

    Node(string x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string str="";
        Node*temp=head;
        while(temp){
            str+=temp->data;
            temp=temp->next;
        }
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};