class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        int i = 0;
        int j = matrix[0].size()-1;
        while(i < matrix.size() && j >= 0)
        {
            if(matrix[i][j] == target)
            {
                flag = true;
                break;
            }
            if(matrix[i][j] > target)
            {
                j--;
                continue;
            }
            if(matrix[i][j] < target)
            {
                i++;
                continue;
            }
        }
        return flag;
    }
};