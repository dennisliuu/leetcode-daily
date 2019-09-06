```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```

### 想法：

在 for loop 中有兩個變量（i, index），一個負責紀錄全部的 index, 一個紀錄不為 0 的 index

並透過 index != i 時表示有不為 0 的數字被往前放了，因此在 i 時改為原本的 0

### 技術筆記
