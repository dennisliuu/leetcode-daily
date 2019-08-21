```
Environment: gcc version 7.4.0
Date: 2019/08/21
Time complexity: O(n)
```

### 想法：

計算 Array 中非重複字元 => 索性直接移除再計算

### 技術筆記

移除重複元素

```c++
#include <algorithm>
#include <vector>

sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
```

經測試先 sort 再 erase 會比直接 erase 還快速
