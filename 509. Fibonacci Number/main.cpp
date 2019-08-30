#include <iostream>
#include <cmath>

class Solution {
public:
    int fib(int N) {
        const auto phi = 1.618034;
        const auto phic = -0.618034;
        return int( (std::pow(phi, N) - std::pow(phic, N)) / std::pow(5, 0.5) );
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.fib(8) << std::endl;
    return 0;
}
