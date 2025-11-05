class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        int second=-1;
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(second<arr[i] && max!=arr[i]){
                second=arr[i];
            }
        }
        
        return second;
    }
};