#include <string>

using namespace std;

class Solution
{
public:
    string reverseOnlyLetters(string S)
    {
        int i = 0;
        int j = S.length() - 1;
        while (i < j)
        {
            if (!isalpha(S[i]))
            {
                i++;
                continue;
            }
            if (!isalpha(S[j]))
            {
                j--;
                continue;
            }
            swap(S[i], S[j]);
            i++;
            j--;
        }
        return S;
    }
};