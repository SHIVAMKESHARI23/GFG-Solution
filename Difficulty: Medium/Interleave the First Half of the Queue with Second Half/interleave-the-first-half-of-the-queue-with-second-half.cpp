class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        int n=q.size();
         
        if (n % 2 != 0) return; 
        queue<int>firsthalf;
        
        for(int i=0;i<n/2;i++){
            firsthalf.push(q.front());
            q.pop();
        }
        while(!firsthalf.empty()){
            q.push(firsthalf.front());
            q.push(q.front());
            firsthalf.pop();
            q.pop();
        }
        
    }
};