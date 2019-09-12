#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    int x1 = nums[0];
    for (int i = 1; i < n; i++)
        x1 = x1 ^ nums[i];
    
    int x2 = 0;
    for (int i = 1; i < n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v = {3,0,1};
    std::cout << s.missingNumber(v) << std::endl;
    return 0;
}
