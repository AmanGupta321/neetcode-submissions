class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n, 0);
        vector<int> rmax(n, 0);
        int val = 0;
        for(int i=0; i<height.size(); i++){
            val = max(height[i], val);
            lmax[i] = val;
        }
        val = 0;
        for(int i=n-1; i>=0; i--){
            val = max(val, height[i]);
            rmax[i] = val;
        }
        int ans = 0, minVal = INT_MAX;
        for(int i=0; i<height.size(); i++){
            minVal = min(lmax[i], rmax[i]);
            if(minVal > 0)
                ans += minVal-height[i];
        }
        return ans;

    }
};
