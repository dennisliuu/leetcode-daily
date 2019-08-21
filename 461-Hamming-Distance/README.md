```
Environment: gcc version 7.4.0
Date: 2019/08/21
Time complexity: O(n)
```

### 想法：

將兩數 XOR, 再透過將結果一個一個位元與 1 做 AND 

### 技術筆記

bitwise
```c++
位元AND運算(&), 位元OR運算(|), 位元XOR運算(^)
>>: 除 2，也相當二進位時向右移一位
<<: 乘 2，也相當二進位時向左移一位
```