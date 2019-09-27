```
Environment: gcc version 7.4.0
Date: 2019/9/27
Time complexity: O(n)
```

### 想法：

遞歸解，中止目標就是當兩個都 nullptr

先建立一顆新的樹，並將當前兩棵樹的 val 相加

並使用遞歸的方式，將兩棵的右子樹與左子樹傳回原函式

### 技術筆記
