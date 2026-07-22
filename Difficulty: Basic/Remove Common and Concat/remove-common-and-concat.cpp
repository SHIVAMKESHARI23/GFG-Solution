class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        //  code here
        unordered_map<char,int>arr;
        
        unordered_map<char,int>arr2;
        for(char ch:s1){
            arr[ch]++;
        }
        for(char ch2:s2){
            arr2[ch2]++;
        }
        
        string result="";
        for(char ch:s1){
            if(arr2.find(ch)==arr2.end()){
                result+=ch;
            }
        }
        
        for(char ch:s2){
            if(arr.find(ch)==arr.end()){
                result+=ch;
            }
        }
        if(result!="")return result;
        return "-1";
    }
};