class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        
        if(st.empty()){
            return ;
        }
        int top=st.top();
        st.pop();
        reverseStack(st);
        pushatbottom(st,top);
        
    }
    
    void pushatbottom(stack<int>&st,int data){
        if(st.empty()){
            st.push(data);
            return;
        }
        int top=st.top();
        st.pop();
        
        pushatbottom(st,data);
        st.push(top);
    }
};