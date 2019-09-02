#include <iostream>
#include <vector>

class Solution
{
public:
    int minCostClimbingStairs(std::vector<int> &cost)
    {
        std::vector<int> dp(cost.size() + 1, 0);
        for (int i = 2; i <= cost.size(); ++i)
        {
            dp[i] = std::min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[cost.size()];
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> cost = {10, 15, 20};
    std::cout << s.minCostClimbingStairs(cost) << std::endl;
    return 0;
}
