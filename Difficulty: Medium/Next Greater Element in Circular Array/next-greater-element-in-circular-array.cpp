class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int> result(n, -1);
        stack<int> st;

        // Iterate through the array twice to simulate circular behavior
        for (int i = 2 * n - 1; i >= 0; i--) {
            
            // 1. Pop smaller elements (standard monotonic stack)
            while (!st.empty() && st.top() <= arr[i % n]) {
                st.pop();
            }

            if (i < n) {
                if (!st.empty()) {
                    result[i] = st.top();
                }
            }

            // 3. Push current element
            st.push(arr[i % n]);
        }
        return result;
    }
};