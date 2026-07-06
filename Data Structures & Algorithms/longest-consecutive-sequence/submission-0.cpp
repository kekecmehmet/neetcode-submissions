class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end());
        int longest_streak = 0;

        for (int num : us) {
            if (us.find(num - 1) == us.end()) {
                int current_num = num;
                int current_streak = 1;

                while (us.find(current_num + 1) != us.end()) {
                    current_num += 1;
                    current_streak += 1;
                }

                longest_streak = max(longest_streak, current_streak);
            }
        }

        return longest_streak;
    }
};