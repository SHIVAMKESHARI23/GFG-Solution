class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int buy=prices[0];
        // int sell=0;
        int profit=0;
        int curr=0;
        for(int i=1;i<prices.size();i++){
            if(buy<prices[i]){
                curr=prices[i]-buy;
            }else{
                buy=prices[i];
                
            }
            profit=max(profit,curr);
        }
        return profit;
    }
};
