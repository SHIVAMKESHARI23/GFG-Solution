class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
       string str="";
       sort(arr.begin(),arr.end());
       string str1=arr[0];
       string str2=arr[arr.size()-1];
       
       for(int i=0;i<str1.size();i++){
           if(str1[i]==str2[i]){
               str+=str1[i];
           }
            else{
                break;
            }
       }
       
       return str;
    }
};