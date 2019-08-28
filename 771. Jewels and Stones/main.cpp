#include <iostream>
#include <string>

class Solution {
public:
    int numJewelsInStones(std::string J, std::string S) {
        int out = 0;
        for (int i : J) {
            for (int k : S) {
                if (i == k) out++;
            }
        }
        return out;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.numJewelsInStones("aA", "aAABB") << std::endl;
    return 0;
}
