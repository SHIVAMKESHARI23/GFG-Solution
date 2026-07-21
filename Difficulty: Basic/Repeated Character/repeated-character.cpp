class Solution {
  public:
    char firstRep(string s) {
        // code here.
        
        unordered_map<char,int>arr;
      for(char ch:s){
          arr[ch]++;
      }
        
        for(char ch:s){
            if(arr[ch]>1)return ch;
            
        }
        return '#';
    }
};