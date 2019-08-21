#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> un_map;
		for (int i = 0; i < nums.size(); i++)
			un_map[nums[i]] = i;
		for (int i = 0, res = 0; i < nums.size(); i++) {
			res = target - nums[i];
			if(un_map.count(res) && un_map[res] != i)
				return {i, un_map[res]};
		}
		return {};
    }
};

int main(void) {
	Solution s;
	vector<int> vect; 
    vect.push_back(3); 
    vect.push_back(2);
	vect.push_back(4);

	vector<int> ans = s.twoSum(vect, 6);
	for (auto i = ans.begin(); i != ans.end(); ++i)
    	std::cout << *i << ' ';
	return 0;
}
