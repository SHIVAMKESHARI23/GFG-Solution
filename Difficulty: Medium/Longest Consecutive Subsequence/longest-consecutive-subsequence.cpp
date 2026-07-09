class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        set<int>nums;
        for(int i=0;i<arr.size();i++){
            nums.insert(arr[i]);
        }
        int count=0;
        int maxcount=0;
        int val;
        bool b=false;
        for(auto&i:nums){
        if(b&&i==val+1){
            count++;
        }
        else{
            count=1;
            b=true;
        }
            val=i;
    
        maxcount=max(maxcount,count);
            
        }
    return maxcount;
    }
};