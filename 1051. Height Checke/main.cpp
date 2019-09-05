#include <vector>
#include <algorithm>
#include <iostream>

class Solution
{
public:
    int heightChecker(std::vector<int> &heights)
    {
        int ans = 0;
        std::vector<int> new_heights;
        new_heights.assign(heights.begin(), heights.end());
        sort(new_heights.begin(), new_heights.end());
        for (int i = 0; i < new_heights.size(); ++i)
        {
            if (new_heights[i] != heights[i])
                ans++;
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> v = {1, 1, 4, 2, 1, 3};
    std::cout << s.heightChecker(v) << std::endl;
    return 0;
}
