class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int start = nums[0];
        set<int> st;
        for(int x:nums){
            st.insert(x);
        }
        int sequence = 0;
        int i = 0;
        int prev = 0;
        int ans = 0;
        for(const auto &it:st){
            if(i==0){
                prev = it;
                sequence++;
                ans++;
                i++;
                continue;
            }
            if((it-prev) == 1){
                sequence++;
                ans = max(ans, sequence);
            }else{
                sequence=1;
            }
            prev = it;
        }
        return ans;
    }
};
