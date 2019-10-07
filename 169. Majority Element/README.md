```
Environment: gcc version 7.4.0
Date: 2019/10/7
Time complexity: O(n)
```
### 想法：

假設第一個數字就是多數元素，那麼當 count 減為0時，我們消耗掉了與多數元素一樣多的非多數元素

那麼同樣道理，數組剩餘部分中的多數元素數值不變。

**數組中從 candidate 被賦值到 count 減到 0 的那一段可以被去除，餘下部分的多數元素依然是原數組的多數元素**

參考：https://blog.csdn.net/kimixuchen/article/details/52787307

### 技術筆記
