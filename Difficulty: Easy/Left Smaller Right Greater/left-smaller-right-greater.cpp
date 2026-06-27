class Solution {
  public:
    int findElement(vector<int> &arr) {
        int n=arr.size();
         vector<int>leftmax(n);
         vector<int>rightmax(n);
         leftmax[0]=arr[0];
         for(int i=1;i<n;i++){
             leftmax[i]=max(leftmax[i-1],arr[i]);
         }
         rightmax[n-1]=arr[n-1];
         for(int j=n-2;j>=0;j--){
             rightmax[j]=min(arr[j],rightmax[j+1]);
         }
         for(int i=1;i<n-1;i++){
             if(arr[i]>=leftmax[i-1]&&arr[i]<=rightmax[i+1]){
                 return arr[i];
             }
         }
         return -1;
    }
};