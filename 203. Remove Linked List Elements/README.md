```
Environment: gcc version 7.4.0
Date: 2019/09/02
Time complexity: O(n)
```

### 想法：

當前指標下一個值若為需要刪除的 val ，便將指標指向下一個

比較困難的是因應測資與邊界考量，須先建立一個點，並指向題目的 head

### 技術筆記

NULL vs nullptr

C++11 以上，NULL 已被棄用，須引入 iostream

NULL 的好處是可以任意多種型態（int, pointer）

nullptr 則不須引用 lib，其功能也只有 nullptr，較不會造成程式混亂