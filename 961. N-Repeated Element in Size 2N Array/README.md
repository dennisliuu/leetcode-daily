```
Environment: gcc version 7.4.0
Date: 2019/08/28
Time complexity: O(n)
```

### 想法：

將遇到的數值於 hash map 做查詢

如果沒有就放入 map，有則直接回傳

這邊注意到 leetcode 在程式的最後需要 return，即便用不到！