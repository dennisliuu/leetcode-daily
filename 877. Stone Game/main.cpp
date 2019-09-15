#include <vector>
#include <algorithm>
#include <iostream>

// class Solution {
// public:
//     bool stoneGame(std::vector<int>& piles) {
//       return true ;
//     }
// };

class Solution
{
public:
    bool stoneGame(std::vector<int> &piles)
    {
        const int n = piles.size();
        std::vector<int> dp(piles);
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                dp[i] = std::max(piles[j] - dp[j + 1], piles[j + i - 1] - dp[j]);
            }
        }
        return dp[0] > 0;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> v = {5, 3, 4, 5};
    std::cout << s.stoneGame(v) << std::endl;
    return 0;
}
