class Solution {
  public:
    vector<vector<int>> separateChaining(int hashsize, vector<int>& nums) {
        
        
        vector<vector<int>> arr(hashsize);
        
        for(int i = 0; i < nums.size(); i++) {
            
            int index = nums[i] % hashsize;
            
            arr[index].push_back(nums[i]);
        }
        
        return arr;
    }
};
