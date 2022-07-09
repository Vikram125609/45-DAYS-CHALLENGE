class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> position;
        for(int i=0;i<matrix.size();i++)   
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0)
                {
                    position.push_back(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)   
        {
            bool flag = false;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0 && flag == false)
                {
                    j = 0;
                    flag = true;
                }
                if(flag)
                {
                    matrix[i][j] = 0;
                }
            }
        }        
        for(auto it : position)
        {
            for(int j=0;j<matrix.size();j++)
            {
                matrix[j][it] = 0;
            }
        }
    }
};