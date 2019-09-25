#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> res;
        for (int i = left, n; i <= right; ++i)
        {
            for (n = i; n > 0; n /= 10)
                if (!(n % 10) || i % (n % 10))
                    break;
            if (!n)
                res.push_back(i);
        }
        return res;
    }
};