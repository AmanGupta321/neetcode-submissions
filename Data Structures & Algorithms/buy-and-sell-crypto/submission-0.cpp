class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =  0;
        int n = prices.size();
        int minPrice = prices[0];
        for(int i=1; i<n; i++){
            minPrice = min(minPrice, prices[i]);
            int profitCurr = prices[i]-minPrice;
            maxProfit = max(profitCurr, maxProfit);
        }
        return maxProfit;
    }
};
