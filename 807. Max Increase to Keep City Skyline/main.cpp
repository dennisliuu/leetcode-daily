class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        int row_len = grid.size();
        int col_len = grid[0].size();
        vector<int> row(row_len, 0);
        vector<int> col(col_len, 0);
        for (int i = 0; i < row_len; i++)
        {
            for (int j = 0; j < col_len; j++)
            {
                row[i] = max(row[i], grid[i][j]);
                col[i] = max(col[i], grid[j][i]);
            }
        }
        int res = 0;
        for (int i = 0; i < row_len; i++)
            for (int j = 0; j < col_len; j++)
                res += min(row[i], col[j]) - grid[i][j];
        return res;
    }
};