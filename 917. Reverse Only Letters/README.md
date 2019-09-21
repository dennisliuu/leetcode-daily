```
Environment: gcc version 7.4.0
Date: 2019/9/21
Time complexity: O(n)
```

### 想法：

two pointer 解

發現大多人好像都這樣，不過也有看到用 stack 反向的！

總之就分別從頭跟尾開始，分別前進與倒退，如果不是字母，就多走（前進、倒退），否則交換

並於交換後分別前進與後退就好囉～

### 技術筆記
