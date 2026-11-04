class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int ans = INT_MAX;
        int high = *std::max_element(piles.begin(), piles.end());

        while(low<=high){
        long long sum = 0;
        int mid = low+(high-low)/2;
            for(int i=0; i<piles.size(); i++){
                sum += (piles[i]+mid-1)/mid;
            }
            if(sum <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
