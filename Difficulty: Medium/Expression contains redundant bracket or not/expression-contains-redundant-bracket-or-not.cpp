class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        stack<char>ch;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                int count=0;
                while(!ch.empty()&&ch.top()!='('){
                    ch.pop();
                    count++;
                }
                if(!ch.empty()){
                    ch.pop();
                }
                
                if(count<=1)return true;
            }
            else{
                ch.push(s[i]);
            }
        }
        return false;
    }
};
