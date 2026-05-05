class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int m=0;
        int n=mat.size();
        vector<vector<int>>nums=mat;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                mat[m][j]=nums[j][i];
            }
            m++;
        }
    }
};
