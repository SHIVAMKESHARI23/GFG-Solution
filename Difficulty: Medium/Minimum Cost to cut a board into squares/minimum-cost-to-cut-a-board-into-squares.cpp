class Solution {
public:
    int minCost(int n, int m, vector<int>& xv, vector<int>& yh) {
        
        
        sort(xv.begin(), xv.end(), greater<int>());
        sort(yh.begin(), yh.end(), greater<int>());

        int hindex = 0;
        int vindex = 0;

        int hp = 1;
        int vp = 1; 

       
        long long cost = 0;

        while (hindex < yh.size() && vindex < xv.size()) {

            if (yh[hindex] >= xv[vindex]) {

                //Added 1LL to avoid integer overflow
                cost += 1LL * yh[hindex] * vp;

                hp++;
                hindex++;
            }
            else {

                //Added 1LL to avoid integer overflow
                cost += 1LL * xv[vindex] * hp;

                vp++;
                vindex++;
            }
        }

        while (hindex < yh.size()) {

            //Added 1LL to avoid overflow
            cost += 1LL * yh[hindex] * vp;

            hp++;
            hindex++;
        }

        while (vindex < xv.size()) {

            // Added 1LL to avoid overflow
            cost += 1LL * xv[vindex] * hp;

            vp++;
            vindex++;
        }

        return cost;
    }
};