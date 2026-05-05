class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<pair<int,int>>v;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<v.size();i++){
            int row=v[i].first;
            int col=v[i].second;
            for(int k=0;k<n;k++){
                mat[k][col]=0;
            }
            for(int k=0;k<m;k++){
                mat[row][k]=0;
            }
        }
        
    }
};