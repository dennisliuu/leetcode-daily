#include <math.h>
#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
       return (n > 0 && std::abs(std::log10(n) / std::log10(2) - int(std::log10(n) / std::log10(2)) == 0));
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.isPowerOfTwo(6) << std::endl;
    return 0;
}
