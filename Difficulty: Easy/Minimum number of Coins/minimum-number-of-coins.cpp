class Solution {
  public:
    int findMin(int n) {
        // code here
        int val;
        int count=0;
        while(n>0){
            if(n>=10){
                val=10;
                
            }
            else if(n>=5){
                val=5;
            }
            else if(n>=2){
                val=2;
            }
            else{
                val=1;
            }
            count++;
            n-=val;
        }
        return count;
    }
};