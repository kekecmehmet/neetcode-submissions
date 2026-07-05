class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult = 1, mult_zero = 0;
        vector<int> ret;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) mult *= nums[i];
            else mult_zero++;
        }
        for(int i=0; i<nums.size(); i++){
            if((nums[i] == 0 and mult_zero >= 2) or (nums[i] != 0 and mult_zero>=1)) ret.push_back(0);
            else if(nums[i] == 0) ret.push_back(mult);
            else ret.push_back(mult/nums[i]);
        }
        return ret;

    }
};
