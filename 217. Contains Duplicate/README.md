```
Environment: gcc version 7.4.0
Date: 2019/08/27
Time complexity: O(n)
```

### 想法：

直接建一個表格 (unordered_map)，裡面有所有數字的頻率

並用一個 for loop 檢查表頻率的部份，大於 0 就回傳 true

時間不快，但簡單好用ㄅ（？