class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
                continue;
            }
            return nums[i];
        }
    }
};
