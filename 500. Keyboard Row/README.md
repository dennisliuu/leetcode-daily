```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n^2)
```
### 想法：

其實我覺得 Python 用 set 解比較漂亮

```Python
class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        # words =  [x.lower() for x in words]
        L1 = ['q', 'w', 'e', 'r', 't','y','u','i','o','p', 'Q','W','E','R','T','Y','U','I','O','P']
        L2 = ['a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L']
        L3 = ['z','x','c','v','b','n','m','Z','X','C','V','B','N','M']
        ans = []
        for i in words:
            if set(list(i)) <= set(L1) or set(list(i)) <= set(L2) or set(list(i)) <= set(L3):
                ans.append(i)
        return ans
```

### 技術筆記
