#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        std::string output;
        output.reserve(address.size());
        for (const char c : address)
        {
            switch (c)
            {
            case '.':
                output += "[.]";
                break;
            default:
                output += c;
                break;
            }
        }
        return output;
    }
};

int main(void)
{
    Solution s;
    cout << s.defangIPaddr("1.1.1.1") << endl;

    return 0;
}