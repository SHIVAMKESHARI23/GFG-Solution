class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        
        int maxwater=0;
        
        while(i<j){
            int width=j-i;
            int height=min(arr[i],arr[j]);
            int current=height*width;
            maxwater=max(maxwater,current);
            if(arr[i]>arr[j]){
                j--;
                
            }
            else{
                i++;
            }
        }
        return maxwater;
    }
};