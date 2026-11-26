class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.front() < nums.back()){
            int l = 0;
            int h = nums.size()-1;
            while(l<=h){
                int m = l+ (h-l)/2;
                if(nums[m] == target) return m;
                else if (nums[m] < target) l = m+1;
                else h = m-1;
            }
            return -1;
        }
        else{
            int left = 0;
            int right = nums.size() - 1;

            while (left < right) {
                int mid = left + (right - left) / 2;

                if (nums[mid] > nums[right])
                    left = mid + 1;
                else
                    right = mid;
            }

            int l = left;
            int h = nums.size()-1;
            while(l<=h){
                int m = l+ (h-l)/2;
                if(nums[m] == target) return m;
                else if (nums[m] < target) l = m+1;
                else h = m-1;
            }
            l = 0;
            h = left-1;
            while(l<=h){
                int m = l+ (h-l)/2;
                if(nums[m] == target) return m;
                else if (nums[m] < target) l = m+1;
                else h = m-1;
            }
            return -1;

        }
    }
};
