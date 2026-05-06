class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        
        vector<pair<double, pair<int,int>>> v;
        
        for(int i = 0; i < val.size(); i++) {
            double ratio = (double)val[i] / wt[i];
            
            v.push_back({ratio, {val[i], wt[i]}});
        }
        
        sort(v.begin(), v.end(), greater<>());
        
        double ans = 0.0;
        
        for(int i = 0; i < v.size(); i++) {
            
            int value = v[i].second.first;
            int weight = v[i].second.second;
            
            if(capacity >= weight) {
                ans += value;
                capacity -= weight;
            }
            else {
                ans += v[i].first * capacity;
                break;
            }
        }
        
        return ans;
    }
};