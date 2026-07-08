
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int>arr;
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
        }
    
    char ch='$';
   for(char ch:s){
       if(arr[ch]==1)return ch;
   }
    return '$';
    }
};