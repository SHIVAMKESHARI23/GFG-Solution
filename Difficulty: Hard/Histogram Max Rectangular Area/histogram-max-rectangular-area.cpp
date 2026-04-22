#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> nsr(n), nsl(n);
        stack<int> st;

        // next Smaller to Right (store index)
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nsr[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // clear stack
        while (!st.empty()) st.pop();

        //  Next Smaller to Left (store index)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nsl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        // Calculate max area
        int maxarea = 0;
        for (int i = 0; i < n; i++) {
            int height = arr[i];
            int width = nsr[i] - nsl[i] - 1;
            int current = height * width;
            maxarea = max(maxarea, current);
        }

        return maxarea;
    }
};