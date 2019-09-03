```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```
### 想法：

經典 dp 題，根據規律可以發現，當走 n 階時，其走法為前一項加前兩項

透過滾動更新，更是將記憶體與速度提昇。

### 技術筆記

dp 表格法（4ms, 8.6MB）

```cpp
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, 1);
        for (int i = 2; i <= n; ++i)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
};
```

滾動更新（0ms, 8.1MB）

```cpp
class Solution
{
public:
    int climbStairs(int n)
    {
        int dp1 = 1, dp2 = 1;
        for (int i = 2; i <= n; ++i)
        {
            int dp = dp1 + dp2;
            dp2 = dp1;
            dp1 = dp;
        }
        return dp1;
    }
};
```