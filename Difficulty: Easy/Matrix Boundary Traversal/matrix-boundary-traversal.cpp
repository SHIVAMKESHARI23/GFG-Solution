class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        
        vector<int> arr;
        
        int m = mat.size();
        int n = mat[0].size();
        
        
        if(m == 1) {
            for(int j = 0; j < n; j++)
                arr.push_back(mat[0][j]);
            return arr;
        }
        
       
        if(n == 1) {
            for(int i = 0; i < m; i++)
                arr.push_back(mat[i][0]);
            return arr;
        }

        int i = 0, j = 0;

       
        while(j < n) {
            arr.push_back(mat[0][j]);
            j++;
        }

       
        i = 1;
        while(i < m) {
            arr.push_back(mat[i][n-1]);
            i++;
        }

        
        j = n - 2;
        while(j >= 0) {
            arr.push_back(mat[m-1][j]);
            j--;
        }

        i = m - 2;
        while(i > 0) {
            arr.push_back(mat[i][0]);
            i--;
        }

        return arr;
    }
};
