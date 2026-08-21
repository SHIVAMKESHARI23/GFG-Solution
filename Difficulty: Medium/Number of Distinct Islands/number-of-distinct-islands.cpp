class Solution {
  private:
  void bfs(int st,int end,vector<vector<int>>&visited,vector<vector<char>>&grid,vector<pair<int,int>>&arr){
      int n=grid.size();
      int m=grid[0].size();
      
      queue<pair<int,int>>qu;
      qu.push({st,end});
      
      int dr[]={-1,0,1,0};
      int dc[]={0,1,0,-1};
      
      visited[st][end]=1;
      while(!qu.empty()){
          int row=qu.front().first;
          int col=qu.front().second;
          qu.pop();
          arr.push_back({row-st,col-end});
          
          for(int i=0;i<4;i++){
              int nrow=row+dr[i];
              int ncol=col+dc[i];
              if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
              && grid[nrow][ncol]=='L' && visited[nrow][ncol]==0
              ){
                  visited[nrow][ncol]=1;
                  qu.push({nrow,ncol});
              }
          }
      }
  }
  public:
  
    int countDistinctIslands(vector<vector<char>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        
        set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L' && visited[i][j]==0){
                    vector<pair<int,int>>arr;
                    bfs(i,j,visited,grid,arr);
                    st.insert(arr);
                }
            }
        }
        return st.size();
    }
};
