/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* sortedArrayToBST(vector<int>& arr) {
        return helperbst(arr,0,arr.size()-1);
        
    }
    
    Node*helperbst(vector<int>&arr,int st,int end){
        if(st>end)return nullptr;
        
        int mid=st+(end-st)/2;
        Node*root=new Node(arr[mid]);
        root->left=helperbst(arr,st,mid-1);
        root->right=helperbst(arr,mid+1,end);
        return root;
    }
};