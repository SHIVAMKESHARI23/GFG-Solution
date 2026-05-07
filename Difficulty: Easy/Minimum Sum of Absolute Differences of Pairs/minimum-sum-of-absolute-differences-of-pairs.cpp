// User function Template for C++

class Solution {
  public:
    long long findMinSum(vector<int> &arr , vector<int> &arr2, int N) {
        long long sum=0;
        sort(arr.begin(),arr.end());
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<N;i++){
            sum+=abs(arr[i]-arr2[i]);
        }
        return sum;
    }
};