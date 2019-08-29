#include <string>
#include <unordered_map>
#include <iostream>

class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {

        std::unordered_map<char, int> s_freq;
        std::unordered_map<char, int> t_freq;
        for (const char &c : s)
        {
            s_freq[c]++;
        }
        for (const char &c : t)
        {
            t_freq[c]++;
        }
        if (s_freq == t_freq)
            return true;
        else
            return false;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.isAnagram("abc", "bca") << std::endl;
    return 0;
}
