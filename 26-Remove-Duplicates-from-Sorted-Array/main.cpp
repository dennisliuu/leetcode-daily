#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        return nums.size();
    }
};

int main(void) {
    Solution s;
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(2);
    cout << s.removeDuplicates(vect) << endl;
    return 0;
}
