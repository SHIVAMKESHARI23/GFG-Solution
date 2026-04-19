class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        if(y==1)return true;
        // if(y<x)return false;
        if(x<=1)return false;
        
        while(y>1){
            if(y%x!=0){
                return false;
            }
            
                y=y/x;
            
        }
        return true;
    }
};