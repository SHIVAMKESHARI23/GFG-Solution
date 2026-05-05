class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int>nums;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count++;
            }
            else{
                nums.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
        arr=nums;
    }
};