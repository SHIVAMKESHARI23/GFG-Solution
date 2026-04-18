class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>result(arr.size());
        int n=arr.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<=arr[i]){
                st.pop();
                
            }
            if(st.empty()){
                result[i]=-1;
            }
            else{
                result[i]=st.top();
            }
            st.push(arr[i]);
        }
        return result;
    }
};