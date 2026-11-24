class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> v(cost.size()+1,-1);
        for(int i=0; i<=cost.size(); i++){
            if(i<=1) v[i] = 0;
            else v[i] = min(v[i-1] + cost[i-1], v[i-2]+cost[i-2]); 
        }
        return v[cost.size()];
    }
};
