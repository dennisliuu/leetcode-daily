#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size(); i+=2) {
            ans += nums[i];
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> v = {1,4,2,3};
    std::cout << s.arrayPairSum(v) << std::endl;
    return 0;
}
