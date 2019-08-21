#include <iostream>

using namespace std;

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int hd = 0;
        int t = x^y; // XOR
        while (t > 0)
        {
            hd += t & 1;
            t >>= 1;
        }
        
    }
};

int main(void)
{
    Solution s;
    cout << s.hammingDistance(1,4) << endl;
}