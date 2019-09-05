```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```
### 想法：

題幹為有多少學生「非遞減」排序

所以先遞增排序一下，再相互比較即可

### 技術筆記

Copy vector

最快解：

```cpp
new_vector.assign(original.begin(), original.end());
```

參考：http://workhahard.blogspot.com/2016/04/c-vector.html