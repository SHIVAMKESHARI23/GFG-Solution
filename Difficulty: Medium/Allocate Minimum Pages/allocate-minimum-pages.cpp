class Solution {
  public:
  bool isvalid(vector<int>arr,int k,int maxallocation){
      int st=1;
      int pages=0;
      for(int i=0;i<arr.size();i++){
          if(arr[i]>maxallocation){
              return false;
          }
          if(pages+arr[i]<=maxallocation){
              pages+=arr[i];
              
          }
          else{
              pages=arr[i];
              st++;
          }
          
      }
      return st>k?false:true;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        int ans=-1;
        if(k>arr.size()){
            return -1;
            
        }
        int st=0;
        int end=0;
        for(int i=0;i<arr.size();i++){
            end+=arr[i];
            
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isvalid(arr,k,mid)){
                end=mid-1;
                ans=mid;
               
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};