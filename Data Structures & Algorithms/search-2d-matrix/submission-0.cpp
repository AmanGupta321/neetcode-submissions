class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left=0, right=cols-1;
        while(left < rows && right >= 0){
            if(matrix[left][right] < target)
                left++;

            else if(matrix[left][right] > target)
                right--;
            else
                return true;
        }
        return false;
    }
};
