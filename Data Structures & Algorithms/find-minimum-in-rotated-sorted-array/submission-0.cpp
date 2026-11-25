class Solution {
public:
    int findMin(vector<int> &nums) {
        int mn = 1e9;
        for(int i = 0; i<nums.size(); i++) if(mn > nums[i]) mn = nums[i];
        return mn;
    }
};
