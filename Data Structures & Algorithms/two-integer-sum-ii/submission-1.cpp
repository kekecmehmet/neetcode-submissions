class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        set<int> st(numbers.begin(), numbers.end());
        vector<int> ret(2, -1);
        for(int i=0; i<numbers.size(); i++){
            set<int>::iterator it = st.find(target-numbers[i]);
            if(it == st.end()) continue;
            ret[0] = 1;
            while(it != st.begin() and ret[0]++) it--;
            ret[1] = i+1;
        }
        return ret;
    }
};
