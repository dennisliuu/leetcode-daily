#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>

class Solution
{
public:
	std::string frequencySort(std::string s)
	{
		// 產生 128 個 0 的 vector
		std::vector<int> f(128, 0);

		for (auto c : s)
		{
			++f[c];
		}
		// 建立數組
		std::vector<std::pair<char, int>> v;
		for (int i = 0; i < 128; ++i)
		{
			if (f[i] > 0)
			{
				// 動態產生（直接在 v 中產生，而非移動）
				v.emplace_back(i, f[i]);
			}
		}

		// 降序
		std::sort(v.rbegin(), v.rend(), [&v] (const std::pair<int, int> &a, const std::pair<int, int> &b) {
			return a.second < b.second;
		});
		
		std::string ans;
		for (auto &kv : v)
		{
			ans.append(kv.second, kv.first);
		}

		return ans;
	}
};

int main(int argc, char const *argv[])
{
	Solution s;
	std::cout << s.frequencySort("tree") << std::endl;
	return 0;
}
