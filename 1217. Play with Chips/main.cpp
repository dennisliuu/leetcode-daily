class Solution
{
public:
    int minCostToMoveChips(vector<int> &chips)
    {
        int odd = 0, even = 0;
        for (auto i : chips)
            if (i % 2 == 0)
                odd++;
            else
                even++;
        return min(odd, even);
    }
};