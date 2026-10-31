class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        int i=0, j=n-1;
        while(i<j){
            if(numbers[i]+numbers[j] > target)
                j--;
            if(numbers[i]+numbers[j] < target)
                i++;
            if(numbers[i]+numbers[j]==target){
                ans.push_back(++i);
                ans.push_back(++j);
                return ans;
            }
        }
        return {};
    }
};
