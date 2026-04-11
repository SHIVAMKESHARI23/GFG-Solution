class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int> span(arr.size());
        stack<int> st;

        span[0] = 1;   // fix
        st.push(0);

        for (int i = 1; i < arr.size(); i++) {
            int current = arr[i];

            while (!st.empty() && current >= arr[st.top()]) {
                st.pop();
            }

            if (st.empty()) {
                span[i] = i + 1;
            } else {
                span[i] = i - st.top();
            }

            st.push(i);
        }

        return span;
    }
};