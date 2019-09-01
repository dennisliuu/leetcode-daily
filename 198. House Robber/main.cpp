#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        vector<int> dp(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            dp[i] = max((i > 1 ? dp[i - 2] : 0) + nums[i], (i > 0 ? dp[i - 1] : 0));
        }
        return dp.back();
    }
};

int main(int argc, char const *argv[])
{
    Solution *s = new Solution;
    vector<int> vect = {1, 3, 1};
    cout << s->rob(vect) << endl;
    return 0;
}
