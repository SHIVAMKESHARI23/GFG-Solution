class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int val=arr[0];
        int maxcurr=1;
        int curr=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==val){
                curr++;
                maxcurr=max(maxcurr,curr);
            }
            else{
                val=arr[i];
                curr=1;
            }
            
        }
        return maxcurr;
        
    }
};