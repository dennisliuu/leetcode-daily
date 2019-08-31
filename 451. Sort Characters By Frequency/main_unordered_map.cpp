#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
	std::string frequencySort(std::string s)
	{
		std::unordered_map<char, int> f;
		for (auto c : s)
		{
			++f[c];
		}
		std::sort(s.begin(), s.end(), [&f] (char a, char b) {
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
