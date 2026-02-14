/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n=mat.size();
        
        vector<vector<Node*>>arr(n,vector<Node*>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=new Node(mat[i][j]);
            }
            
        }
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                
             if(j+1<n){
                 
                 arr[i][j]->right=arr[i][j+1];
             }
             if(i+1<n){
                 arr[i][j]->down=arr[i+1][j];
             }
            }
        }
        return arr[0][0];
    }
};