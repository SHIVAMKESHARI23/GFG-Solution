class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // code here
        vector<int>arr(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            arr[i]=arr[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=nums.size()-2;i>=0;i--){
            suffix*=nums[i+1];
            arr[i]*=suffix;
        }
        return arr;
    }
};
