#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans = {0};
        for (int i = 1; i <= num; i++)
        {
            ans.push_back(ans[i>>1]+(i&1));
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> ans = s.countBits(2);
    for (auto i : ans)
    {
        cout << i << "\n";
    }
    
    return 0;
}
