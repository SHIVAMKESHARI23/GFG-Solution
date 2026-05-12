class Solution {
  public:
    int maxSubStr(string &s) {
        // code here
        int count=0;
        int count2=0;
        int finalcount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count++;
            }
            else{
                count2++;
            }
            if(count==count2){
                finalcount++;
                // count=count2=0;
            }
        }
        if(count != count2)
            return -1;
            
        return finalcount;
    }
};
