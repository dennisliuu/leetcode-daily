#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 0;
        for (int i = digits.size() - 1; i > -1; i--)
        {  
            digits[i] += carry;
            carry = 0;
            if (i == digits.size() - 1)
                digits[i]++;
            if (digits[i] >= 10)
            {
                digits[i] = 0;
                carry++;
            }
            else
            {
                carry = 0;
            }
        }
        if (carry > 0)
        {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> vect = {9,9,9,9};
    vect = s.plusOne(vect);
    for (auto i : vect)
    {
        cout << i << endl;
    }
    return 0;
}
