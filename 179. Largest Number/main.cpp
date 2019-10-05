#include <string>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::string largestNumber(std::vector<int> &nums)
    {
        std::sort(std::begin(nums), std::end(nums), [](int a, int b) { return std::to_string(a) + std::to_string(b) > std::to_string(b) + std::to_string(a); });
        std::string result;
        for (auto const &s : nums)
        {
            result += std::to_string(s);
        }
        return result[0] == '0' ? "0" : result;
    }
};