class Solution {
  public:

    int findParent(int x, vector<int>& parent) {

        if(parent[x] == x)
            return x;

        return parent[x] = findParent(parent[x], parent);
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {

        int n = deadline.size();

        vector<pair<int,int>> jobs;

        int maxDeadline = 0;

        for(int i = 0; i < n; i++) {

            jobs.push_back({profit[i], deadline[i]});

            maxDeadline = max(maxDeadline, deadline[i]);
        }

        // sort by profit descending
        sort(jobs.begin(), jobs.end(), greater<pair<int,int>>());

        // DSU parent
        vector<int> parent(maxDeadline + 1);

        for(int i = 0; i <= maxDeadline; i++) {
            parent[i] = i;
        }

        int countJobs = 0;
        int maxProfit = 0;

        for(auto &job : jobs) {

            int availableSlot = findParent(job.second, parent);

            if(availableSlot > 0) {

                countJobs++;

                maxProfit += job.first;

                // occupy slot
                parent[availableSlot] =
                    findParent(availableSlot - 1, parent);
            }
        }

        return {countJobs, maxProfit};
    }
};