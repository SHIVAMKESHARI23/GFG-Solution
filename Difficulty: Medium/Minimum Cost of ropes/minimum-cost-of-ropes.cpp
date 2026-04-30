class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int x : arr) {
            pq.push(x);
        }

        int total = 0;

        while (pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();

            int sum = a + b;
            total += sum;

            pq.push(sum);
        }

        return total;
    }
};