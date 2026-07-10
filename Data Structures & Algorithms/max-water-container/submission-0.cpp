class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = -1;
        for(int i=0; i<heights.size(); i++){
            for(int j = i+1; j<heights.size(); j++){
                maxArea = max(maxArea, (j-i)*min(heights[i], heights[j]));
            }
        }
        return maxArea;
    }
};
