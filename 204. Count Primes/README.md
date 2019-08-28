```
Environment: gcc version 7.4.0
Date: 2019/08/28
Time complexity: O(n^2)
```

### 想法：

時間很長，但使用空間很少

以接近暴力的方式解

此題也可以先建一個 hash table，再用查表方式解如下

```C++
class Solution {
public:
  int countPrimes(int n) {
    static vector<int> sieve;
    if (n <= 2) return 0;
    if (sieve.size() < n/2) {
      sieve.resize(n/2, 1);
      for (int p = 3; p*p < n; p += 2) {
        if (!sieve[p/2]) continue;
        int pp = max(sieve[p/2], p*p);
        for (; pp < n; pp += 2*p)
          sieve[pp/2] = 0;
        sieve[p/2] = pp;
      }
    }
    int result = 0;
    for (int i = 0; i < n/2; ++i)
      result += !!sieve[i];
    return result;
  }
};
```