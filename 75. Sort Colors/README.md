```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```
### 想法：

內建的 quicksort 比較慢
討論區可以看見 counting sort 明顯比較快

```cpp
class Solution {
public:
	void sortColors(vector<int>& nums) {
		int i0 = -1, i1 = -1, i2 = -1;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				i2++, i1++, i0++;
				nums[i2] = 2;
				nums[i1] = 1;
				nums[i0] = 0;
			}
			else if (nums[i] == 1)
			{
				i2++, i1++;
				nums[i2] = 2;
				nums[i1] = 1;
			}
			else if (nums[i] == 2)
			{
				i2++;
				nums[i2] = 2;
			}
		}
	}
};
```

### 技術筆記
