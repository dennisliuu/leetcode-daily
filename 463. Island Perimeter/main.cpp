#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int col = grid.size();
        int row = grid[0].size();
        int area = 0;
        int rep = 0;
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (grid[i][j] == 1)
                {
                    area++;
                    if (i != 0 && grid[i - 1][j] == 1)
                    {
                        rep++;
                    }
                    if (j != 0 && grid[i][j - 1] == 1)
                    {
                        rep++;
                    }
                }
            }
        }
        return area * 4 - rep * 2;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    cout << s.islandPerimeter(grid) << endl;
    return 0;
}
