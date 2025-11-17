class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       /* int n =cost.size();
        vector<int>min_cost(cost.size(),0);

        min_cost[0] = 0;
        min_cost[1] = 0;

        for(int i=2; i<cost.size(); i++){
            min_cost[i] =  min(cost[i]+min_cost[i-2], cost[i]+min_cost[i-2]);
        }

        return min(min_cost[n-1], min_cost[n-2]);*/

        int n = cost.size();
    vector<int> min_cost(n);

    min_cost[0] = cost[0];
    min_cost[1] = cost[1];

    for(int i = 2; i < n; i++) {
        min_cost[i] = min(cost[i] + min_cost[i-1],
                          cost[i] + min_cost[i-2]);
    }

    return min(min_cost[n-1], min_cost[n-2]);


    }
};