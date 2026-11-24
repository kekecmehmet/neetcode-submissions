class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(n+1, -1);
        for(int i=1; i<=n; i++){
            if(i==1) v[i] = 1;
            else if(i==2) v[i] = 2;
            else v[i] = v[i-1] + v[i-2];
        }
        return v[n];
    }
};
