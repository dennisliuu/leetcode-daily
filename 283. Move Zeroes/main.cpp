#include <vector>

class Solution
{
public:
    void moveZeroes(std::vector<int> &nums)
    {
        for (int i = 0, index = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[index] = nums[i];
                if (index != i)
                    nums[i] = 0;
                index++;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    std::vector<int> v = {0, 1, 0, 3, 12};
    Solution s;
    s.moveZeroes(v);
    return 0;
}
