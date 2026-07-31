class Solution {
public:
    bool search(string& txt, string& pat) {

        int s1len = txt.size();
        int s2len = pat.size();

        if (s1len < s2len)
            return false;

        vector<int> mp(26, 0);
        vector<int> mp2(26, 0);

        int r = 0;
        int l = 0;

        // First Window
        while (r < s2len) {
            mp[pat[r] - 'a']++;
            mp2[txt[r] - 'a']++;
            r++;
        }

        r--;

        // Sliding Window
        while (r < s1len) {

            if (mp == mp2)
                return true;

            r++;

            if (r != s1len)
                mp2[txt[r] - 'a']++;

            mp2[txt[l] - 'a']--;

            l++;
        }

        return false;
    }
};