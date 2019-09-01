#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // 建立 dp 表格
        // vector<int> v(nums.size());
        // v[0] = nums[0];
        // for (int i = 1; i < nums.size(); ++i)
        //     v[i] = max(v[i-1] + nums[i], v[i]);
        // return *max_element(v.begin(), v.end());

        // 單靠一個變量滾動更新 dp 的值
        int ans = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            sum = max(sum + nums[i], nums[i]);
            if (sum > ans)
            {
                ans = sum;
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution *s = new Solution;
    vector<int> vect = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << s->maxSubArray(vect) << endl;
    return 0;
}
