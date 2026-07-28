class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        // if(str1.size()<str2.size())return str1;
        unordered_map<char,int>mp;
        for(int i=0;i<str1.size();i++){
            mp[str1[i]]++;
        }
        
        for(int i=0;i<str2.size();i++){
            if(mp.find(str2[i])!=mp.end()&&mp[str2[i]]>0){
                mp[str2[i]]--;
                str1.erase(remove(str1.begin(),str1.end(),str2[i]),str1.end());
            }
        }
        return str1;
    }
};
