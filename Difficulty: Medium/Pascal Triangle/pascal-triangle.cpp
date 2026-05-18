class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<int>>arr(n);
        for(int i=0;i<n;i++){
            arr[i].resize(i+1);
            arr[i][0]=arr[i][i]=1;
            for(int j=1;j<i;j++){
                
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
                
            }
            
                
        }
        vector<int>ans=arr[n-1];
       
       return ans;
        
    }
};
