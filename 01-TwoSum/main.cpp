#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++)
			map[nums[i]] = i;
		for (int i = 0, res = 0; i < nums.size(); i++) {
			res = target - nums[i];
			if(map.count(res) && map[res] != i)
				return {i, map[res]};
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

	vector<int> path = s.twoSum(vect, 6);
	for (auto i = path.begin(); i != path.end(); ++i)
    	std::cout << *i << ' ';
	return 0;
}
