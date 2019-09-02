```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```
### 想法：

建立 dp 表格，並為 top-down 的想法，先決定如果走到第 n 階，那麼如何用最少的 cost 走到的

因此透過 dp 找出最小的 cost

### 技術筆記

```
a++ is known as postfix.
add 1 to a, returns the old value.
```

```
++a is known as prefix.
add 1 to a, returns the new value.
```
來源：https://stackoverflow.com/questions/484462/difference-between-pre-increment-and-post-increment-in-a-loop