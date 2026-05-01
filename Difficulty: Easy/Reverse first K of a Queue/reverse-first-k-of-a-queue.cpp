class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(q.size()<k){
            return q;
        }
       stack<int>st;
       
       for(int i=0;i<k;i++){
          st.push(q.front());
          q.pop();
           
           
       }
       
       while(!st.empty()){
           q.push(st.top());
           st.pop();
           
       }
       int remainingcount=q.size()-k;
       while(remainingcount>0){
           q.push(q.front());
           q.pop();
           remainingcount--;
           
       }
       
       
       return q;
    }
};