#include <iostream>
#include <unordered_map>
#include <vector>
class Solution {
public:
    int repeatedNTimes(std::vector<int>& A) {
        std::unordered_map<int, int> m;
        for (auto i : A) {
            if (m.count(i)) {
                return i;
            }
            else {
                m[i]++;
            }
        }
        return 0; // leetcode 規定
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> vect = {1,2,3,3};
    std::cout << s.repeatedNTimes(vect) << std::endl;
    return 0;
}
