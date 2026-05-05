class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int val=-1;
        int n=arr.size();
        for(auto &it:mp){
            if(it.second>n/2){
                val=it.first;
            }
        }
        return val;
    }
};