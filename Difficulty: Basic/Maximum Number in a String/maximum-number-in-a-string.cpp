class Solution {
  public:
    int extractMaximum(string &s) {
    
        int maxcount=-1;
        int count=0;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&& s[i]<='9'){
                str+=s[i];
                count++;
            }
            else if(count!=0 ){
                int y=stoi(str);
                maxcount=max(maxcount,y);
                count=0;
                str="";
            }
            else{
                count=0;
            }
            
        }
        
        
        if(!str.empty()){
            int y=stoi(str);
            maxcount=max(maxcount,y);
            
        }
        return maxcount;
        
    }
};