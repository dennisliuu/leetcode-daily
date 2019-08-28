#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> lr = {};
        vector<int> ll = {};
        for (auto i : A) {
            if (i %2 != 0) lr.push_back(i);
            else ll.push_back(i);
        }
        vector<int> out = ll;
        out.insert(out.end(), lr.begin(), lr.end());
        return out;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> vect = {0,1,2};
    vect = s.sortArrayByParity(vect);
    for (auto i : vect)
    {
        cout << i << endl;
    }
    
    return 0;
}
