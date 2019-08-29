```
Environment: gcc version 7.4.0
Date: 2019/08/29
Time complexity: O(n)
```

### 想法：

一直跟下一個數字比較，沒有比它大的救回傳當前 index

下面也提供一個暴力版的一行 python code

```python
class Solution:
    def peakIndexInMountainArray(self, A: List[int]) -> int:
        return A.index(max(A))
```