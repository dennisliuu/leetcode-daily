```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```
### 想法：

如果要找兩個取min之後得到的值必須是最大，那就必須讓兩數相差最小，才不會浪費

因此先 sort，這樣確保兩數之間差距最小，接著可以取 min(n, n+1)

不過取 min 答案一定是 n，所以就奇數加一加就好了

### 技術筆記
