```
Environment: gcc version 7.4.0
Date: 2019/08/27
Time complexity: O(n)
```

### 想法：

直觀解法，每次處理先加 carry

carry >= 10 就進位，最後在判斷要不要在 digits 最前面補 1