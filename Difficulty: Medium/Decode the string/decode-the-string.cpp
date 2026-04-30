class Solution {
  public:
    string decodedString(string &s) {
        // code here
        string curr="";
        stack<int>numstack;
        stack<string>str;
        int num=0;
        
        for(char &c:s){
            if(isdigit(c)){
                num=num*10+(c-'0');
                
            }
            else if(c=='['){
                numstack.push(num);
                str.push(curr);
                num=0;
                curr="";
            }
            else if(c==']'){
                int repeat=numstack.top();
                string temp=curr;
                for(int i=1;i<repeat;i++){
                    curr+=temp;
                }
                curr=str.top()+curr;
                numstack.pop();
                str.pop();
            }
            else{
                curr+=c;
            }
        }
        return curr;
    }
};