#include <math.h>

using namespace  std;

class Solution
{
public:
    bool isPowerOfFour(int num)
    {
        return (num > 0 && abs(log10(num) / log10(4) - int(log10(num) / log10(4)) == 0));
    }
};