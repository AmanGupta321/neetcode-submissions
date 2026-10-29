class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int x:nums){
            if(us.count(x) != 0)
                return true;    
            us.insert(x);
        }
    return false;
    }
};