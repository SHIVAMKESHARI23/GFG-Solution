import java.util.*;

class Solution {
    public ArrayList<Integer> bfs(ArrayList<ArrayList<Integer>> adj) {
        
        Queue<Integer> q = new LinkedList<>();
        int n = adj.size();
        int[] visited = new int[n];
        ArrayList<Integer> ans = new ArrayList<>();
        
        // Start BFS from node 0
        q.offer(0);
        visited[0] = 1;
        
        while (!q.isEmpty()) {
            int current = q.poll();   // remove front
            ans.add(current);
            
            ArrayList<Integer> temp = adj.get(current);
            
            for (int i : temp) {
                if (visited[i] == 0) {
                    visited[i] = 1;
                    q.offer(i);
                }
            }
        }
        
        return ans;
    }
}