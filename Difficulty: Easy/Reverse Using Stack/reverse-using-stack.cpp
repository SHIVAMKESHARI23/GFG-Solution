class Solution {
  public:
    string reverse(const string& s) {
        // code here
        stack<char>st;
        int i=0;
        while(i<s.size()){
            
            st.push(s[i]);
            
           
            i++;
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
            
        }
        return result;
    }
};