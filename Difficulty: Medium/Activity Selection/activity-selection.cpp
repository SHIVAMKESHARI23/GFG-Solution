class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size();
        
        vector<pair<int,int>> v;
        
        // Step 1: Pair start and finish
        for(int i = 0; i < n; i++){
            v.push_back({finish[i], start[i]});
        }
        
        // Step 2: Sort by finish time
        sort(v.begin(), v.end());
        
        // Step 3: Greedy selection
        int count = 1;
        int lasttime = v[0].first;
        
        for(int i = 1; i < n; i++){
            if(v[i].second > lasttime){
                count++;
                lasttime = v[i].first;
            }
        }
        
        return count;
    }
};