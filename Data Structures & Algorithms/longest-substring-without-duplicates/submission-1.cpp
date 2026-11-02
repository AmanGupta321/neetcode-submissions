class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> um;
        int maxValue = 0, left = 0, right=0;
        while(right<n){
            if(um.find(s[right]) == um.end()){
                um.insert(s[right]);
                right++;
            }
            else{
                um.erase(s[left]);
                left++;
            }
            maxValue = max(maxValue, right-left);
        }
        return maxValue;
    }   
};
