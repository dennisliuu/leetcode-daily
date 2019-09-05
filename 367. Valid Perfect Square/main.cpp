#include <math.h>
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (abs(pow(num, 0.5) - int(pow(num, 0.5)) > 0))
            return false;
        return true;
    }
};