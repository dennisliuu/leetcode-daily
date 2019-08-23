#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int ans = {};
        for(auto num : nums) {
            ans ^= num;
        }
        return ans;
        
    }
};

int main(void) {
    Solution s;
    std::vector<int> vect;
	vect.push_back(2);
	vect.push_back(2);
	vect.push_back(1);

    std::cout << s.singleNumber(vect) << std::endl;
}