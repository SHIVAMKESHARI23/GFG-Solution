class Solution {
    private:
    
    bool bfs(vector<int>&visited,int i,vector<vector<int>>&adj,vector<int>&color){
        queue<int>qu;
        qu.push(i);
        visited[i]=1;
        color[i]=1;
        while(!qu.empty()){
            int node=qu.front();
            qu.pop();
            for(int j=0;j<adj[node].size();j++){
                int nr=adj[node][j];
                if(visited[nr]==0){
                    if(color[node]==1){
                        color[nr]=2;
                    }
                    if(color[node]==2){
                        color[nr]=1;
                    }
                    visited[nr]=1;
                    qu.push({nr});
                }
                else{
                    if(color[node]==color[nr]){
                        return false;
                    }
                    
                }
            }
        }
        return true;
    }
    
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int>color(V,0);
        
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
           int u=edges[i][0];
           int v=edges[i][1];
           adj[u].push_back(v);
           adj[v].push_back(u);
            
        }
        
        vector<int>visited(V,0);
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                if(!bfs(visited,i,adj,color)){
                    return false;
                }
                
            }
        }
        return true;
    }
};