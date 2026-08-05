class Solution {
public:
    int search(vector<int>& nums, int target) {
        return realSearch(nums, 0, nums.size() - 1, target);
    }

    int realSearch(const vector<int>& nums, int l, int r, int t) {
        if (l > r) return -1;
        
        int mid = l + (r - l) / 2;
        
        if (nums[mid] == t) return mid;
        if (nums[mid] < t) return realSearch(nums, mid + 1, r, t);
        return realSearch(nums, l, mid - 1, t);
    }
};