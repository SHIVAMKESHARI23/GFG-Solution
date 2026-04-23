class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int>arr;
        while(!q.empty()){
            arr.push(q.front());
            q.pop();
            
        }
        while(!arr.empty()){
            q.push(arr.top());
            arr.pop();
        }
    }
};