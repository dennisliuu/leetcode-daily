#include <vector>
#include <iostream>

class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;
        std::vector<int> factors = {2, 3, 5};
        for (auto factor : factors) {
            while (num % factor == 0) num /=factor;
        }
        return num == 1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.isUgly(14) << std::endl;
    return 0;
}
