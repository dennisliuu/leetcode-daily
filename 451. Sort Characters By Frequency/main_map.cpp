#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

class Solution
{
public:
    std::string frequencySort(std::string &s)
    {
        std::map<char, int> f;
        for (char c : s)
            ++f[c];
        sort(s.begin(), s.end(), [&f](char a, char b) {
            return f[a] > f[b] || (f[a] == f[b] && a > b);
        });
        return s;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.frequencySort("tree") << std::endl;
    return 0;
}
