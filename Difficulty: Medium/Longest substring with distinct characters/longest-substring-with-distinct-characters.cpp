class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        set<char> arr;
        int maxlength = 0;
        int left = 0;

        for(int i = 0; i < s.size(); i++) {
            while(arr.find(s[i]) != arr.end()) {
                arr.erase(s[left]);
                left++;
            }

            arr.insert(s[i]);
            maxlength = max(maxlength, i - left + 1);
        }

        return maxlength;
    }
};