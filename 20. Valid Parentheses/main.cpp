#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> vect = {};
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                vect.push_back(c);
            else
            {
                if (vect.size() == 0)
                    return false;
                if ((c == ')' && vect.back() == '(') || (c == ']' && vect.back() == '[') || (c == '}' && vect.back() == '{'))
                {
                    vect.pop_back();
                }
                else {
                    vect.push_back(c);
                }
            }
        }
        if (vect.size() == 0)
            return true;
        else
            return false;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    string str = "(])";
    cout << s.isValid(str) << endl;
    return 0;
}
