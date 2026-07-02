class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> us;
        vector<int> v(2,0);
        for(int i=0; i<nums.size(); i++){
            unordered_map<int,int>::const_iterator res = us.find(target-nums[i]);
            if(res != us.end()){
                v[0] = min(i, res->second);
                v[1] = max(i, res->second);
                return v;
            }
            us[nums[i]] = i;
        }
        return v;
    }
};