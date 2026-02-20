class Solution {
public:
    void dfsHelper(int node, vector<vector<int>>& adj, 
                   vector<int>& visited, vector<int>& ans) {
        
        visited[node] = 1;
        ans.push_back(node);
        
        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                dfsHelper(neighbour, adj, visited, ans);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> visited(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfsHelper(i, adj, visited, ans);
            }
        }

        return ans;
    }
};