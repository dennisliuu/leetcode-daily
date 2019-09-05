#include <string>
#include <iostream>
class Solution {
public:
    std::string removeOuterParentheses(std::string S)
    {
        int count = 0;
        std::string sb = "";
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == '(') {
                if (count > 0) {
                    sb.append(1, S[i]);
                }
                count++;
            }
            if (S[i] == ')') {
                count--;
                if (count > 0) {
                    sb.append(1, S[i]);
                }
            }
        }
        return sb;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.removeOuterParentheses("(())") << std::endl;
    return 0;
}
