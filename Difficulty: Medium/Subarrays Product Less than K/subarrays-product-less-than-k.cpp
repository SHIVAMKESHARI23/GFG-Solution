class Solution {
public:
    int countSubarray(vector<int>& arr, int k) {

        if(k <= 1) return 0;

        int count = 0;
        long long pro = 1;
        int left = 0;

        for(int i = 0; i < arr.size(); i++) {

            pro *= arr[i];

            while(left <= i && pro >= k) {
                pro /= arr[left];
                left++;
            }

            count += (i - left + 1);
        }

        return count;
    }
};