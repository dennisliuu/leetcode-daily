#include <vector>
#include <iostream>

// Better way
class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        if (prices.size() == 0)
        {
            return 0;
        }
        int mini = prices[0];

        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++)
        {

            maxProfit = std::max(maxProfit, prices[i] - mini);
            mini = std::min(mini, prices[i]);
        }

        return maxProfit;
    }
};

// Bruce force
// class Solution {
// public:
//     int maxProfit(std::vector<int>& prices) {
//         int max = 0;
//         for (int i = 0; i < prices.size(); i++) {
//             for (int j=i+1; j < prices.size(); j++) {
//                 if (prices[j]-prices[i] > max) {
//                     max = prices[j]-prices[i];
//                 }
//             }
//         }
//         return max;
//     }
// };

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> vect = {7, 1, 5, 3, 6, 4};
    std::cout << s.maxProfit(vect) << std::endl;
    return 0;
}
