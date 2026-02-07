/*The structure of the node is
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
class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        // your code here
            Node*temp=head;
            int count=0;
            vector<int>arr;
            while(temp){
                count++;
                arr.push_back(temp->data);
                
                temp=temp->next;
            }
            int n;
            if(count%k==0){
                n=count/k;
            }
            else{
                n=(count/k)+1;
            }
            // cout<<n<<endl;
            return arr[n-1];
    }
};