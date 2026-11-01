class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0, j=n-1, maxValue=INT_MIN;
        while(i<j){
            int width = j-i;
            int ht = min(heights[i], heights[j]);
            int area = width * ht;
            maxValue = max(area, maxValue);
            (heights[i] < heights[j]) ? i++ : j--;
        }
        return maxValue;
    }
};
