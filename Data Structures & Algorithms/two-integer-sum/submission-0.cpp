class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        vector <int> ans;
        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(um.find(complement) != um.end()){
                ans.push_back(um[complement]);
                ans.push_back(i);
                break;
            }
            um[nums[i]] = i;
        }
        return ans;
    }
};
