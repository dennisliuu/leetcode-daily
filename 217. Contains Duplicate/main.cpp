#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;        
        for (auto v : nums)
            ++m[v];
        for (auto p : m) {
            if (p.second > 1) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}
