#include <vector>
#include <string>
#include <unordered_set>
#include <iostream>

using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> morse_code = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_set<string> gen_codes;
        string code = "";
        for (auto word : words)
        {
            for (auto ch : word)
            {
                code += morse_code[ch - 'a'];
            }
            gen_codes.insert(code);
            code.clear();
        }
        return gen_codes.size();
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> v = {"gin", "zen", "gig", "msg"};
    cout << s.uniqueMorseRepresentations(v) << endl;
    return 0;
}
