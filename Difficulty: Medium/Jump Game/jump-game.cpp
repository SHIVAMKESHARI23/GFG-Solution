class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        // int pi=0;
        // for(int i=0;i<arr.size();i++){
        //     if(i==arr.size()-1){
        //         return true;
        //     }
        //     int y=arr[i];
        //     int count=0;
        //     while(count<y){
        //         if(i==arr.size()-1)return true;
        //         count++;
        //         i++;
        //     }
        // }
        // return false;
      int maxre=0;
      for(int i=0;i<arr.size();i++){
          if(i>maxre){
              return false;
          }
          maxre=max(maxre,i+arr[i]);
          if(maxre>=arr.size()-1){
              return true;
          }
      }
        return false;
    }
};