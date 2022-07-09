class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        for(int i = 0;i < pascal.size();i++)
        {
            pascal[i].resize(i + 1);
            pascal[i][0] = 1;
            pascal[i][pascal[i].size() - 1] = 1;
        }
        for(int i=2;i<pascal.size();i++)
        {
            for(int j=1;j<pascal[i].size()-1;j++)
            {
                pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
        return pascal;
    }
};