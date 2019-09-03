#include <iostream>

class Solution
{
public:
    int climbStairs(int n)
    {
        int dp1 = 1, dp2 = 1;
        for (int i = 2; i <= n; ++i)
        {
            int dp = dp1 + dp2;
            dp2 = dp1;
            dp1 = dp;
        }
        return dp1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.climbStairs(3) << std::endl; 
    return 0;
}
