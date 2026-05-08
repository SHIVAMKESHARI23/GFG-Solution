class Solution {
  public:
  static bool mycomp(string str1,string str2){
      return (str1+str2>str2+str1);
  }
    string findLargest(vector<int> &arr) {
        // code here
        vector<string>nums;
        for(int i=0;i<arr.size();i++){
            nums.push_back(to_string(arr[i]));
        }
        sort(nums.begin(),nums.end(),mycomp);
        string res="";
        for(int i=0;i<nums.size();i++){
            res+=nums[i];
        }
        if(res[0]=='0')return "0";
        return res;
        
    }
};