```
Environment: gcc version 7.4.0
Date: 2019/10/5
Time complexity: O(n)
```

### 想法：

> 因為要拼出最大的數字，我們要對這些數字進行排序，
> 但是，直接比較數字大小是行不通的！
> 例如：12 和 121，
> 雖然 121 > 12，但是 12121 > 12112，
> 所以我們定義排序的規則是，如果 AB > BA，那我們設定 A < B，
> 也就是最後拼接起來時是 A 放在 B 之前。

參考：https://github.com/xxhomey19/leetcode-30days/tree/master/Day20

### 技術筆記

![](https://i.imgur.com/mg7EZN4.png)

參考：https://ithelp.ithome.com.tw/articles/10215151