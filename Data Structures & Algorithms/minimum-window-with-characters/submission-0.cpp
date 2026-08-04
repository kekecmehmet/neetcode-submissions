class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        vector<int> countT(128, 0);
        vector<int> window(128, 0);

        for (char c : t) {
            countT[c]++;
        }

        int required = 0;
        for (int i = 0; i < 128; i++) {
            if (countT[i] > 0) required++;
        }

        int left = 0, right = 0;
        int formed = 0;
        
        int min_len = INT_MAX;
        int start_idx = 0;

        while (right < s.length()) {
            char c = s[right];
            window[c]++;

            if (countT[c] > 0 && window[c] == countT[c]) {
                formed++;
            }

            while (left <= right && formed == required) {
                c = s[left];

                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    start_idx = left;
                }

                window[c]--;
                if (countT[c] > 0 && window[c] < countT[c]) {
                    formed--;
                }

                left++;
            }

            right++;
        }

        return min_len == INT_MAX ? "" : s.substr(start_idx, min_len);
    }
};