#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (target <= nums[i])
            {
                return i;
            }
        }
        return nums.size();
    }
};

//  for
//  i in range(len(nums)) : if (target <= nums[i]) : return i
//                                                   return len(nums)

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> vect = {1, 2, 3, 4};
    cout << s.searchInsert(vect, 5) << endl;
    return 0;
}
