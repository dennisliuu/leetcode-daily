class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int p = coordinates[0][0], q = coordinates[0][1], u = coordinates[1][0], v = coordinates[1][1];
        for (auto c : coordinates)
        {
            if ((c[0] - p) * (c[1] - v) != (c[0] - u) * (c[1] - q))
                return false;
        }
        return true;
    }
};