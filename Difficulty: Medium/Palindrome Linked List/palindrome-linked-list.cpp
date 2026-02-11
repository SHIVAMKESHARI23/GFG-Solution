/*
class Node {
  public:
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
    bool isPalindrome(Node *head) {
        //  code here
        vector<int>arr;
        Node*temp=head;
        while(temp){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        int i=0;
        int j=arr.size()-1;
        while(i<=j){
            if(arr[i]!=arr[j])return false;
            i++;
            j--;
            
        }
        return true;
    }
};