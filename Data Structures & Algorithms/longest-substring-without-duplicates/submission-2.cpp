class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        /*
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
        */
        vector<int> um(256,-1);
        int start = -1;
        int maxLen = 0;
        for(int i=0; i<n; i++){
            if(um[s[i]] > start)    
                start = um[s[i]];
            um[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }
        return maxLen;
    }   
};
