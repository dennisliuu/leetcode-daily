#include <math.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
       return (n > 0 && abs(log10(n) / log10(3) - int(log10(n) / log10(3)) == 0));
    }
};