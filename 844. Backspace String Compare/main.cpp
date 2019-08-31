#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    stack<int> finalString(string A)
    {
        stack<int> s;
        for (auto c : A)
        {
            if (c == '#' and s.size() != 0)
                s.pop();
            else if (c == '#' and s.size() == 0)
                continue;
            else
                s.push(c);
        }
        return s;
    }
    bool backspaceCompare(string S, string T)
    {
        return finalString(S) == finalString(T);
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.backspaceCompare("y#fo##f", "y#f#o##f") << endl;
    return 0;
}