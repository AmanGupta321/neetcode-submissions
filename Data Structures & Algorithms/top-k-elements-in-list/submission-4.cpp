class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> res(20001, 0);
        for(int i=0; i<nums.size(); i++){
            res[10001+nums[i]]++;
        }
        vector<int> answer;
        while(k>0){
            int maxV = *max_element(res.begin(), res.end());
            for(int i=0; i<20001 && k>0; i++){
                if(res[i] == maxV){
                    answer.push_back(i-10001);
                    res[i] = 0;
                    k--;
                }
            }
        }
        return answer;
    }
};
