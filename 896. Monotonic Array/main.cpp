#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isMonotonicIncreasing(vector<int> &A)
    {
        for (int i = 1; i < A.size(); ++i)
        {
            if (A[i] < A[i - 1])
            {
                return false;
            }
        }
        return true;
    }

    bool isMonotonicDecreasing(vector<int> &A)
    {
        for (int i = 1; i < A.size(); ++i)
        {
            if (A[i] > A[i - 1])
            {
                return false;
            }
        }
        return true;
    }

    bool isMonotonic(vector<int> &A)
    {
        return isMonotonicIncreasing(A) || isMonotonicDecreasing(A);
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v = {1, 2, 2, 3};
    cout << s.isMonotonic(v) << endl;
    return 0;
}
