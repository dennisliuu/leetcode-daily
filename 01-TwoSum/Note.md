```
Environment: gcc version 7.4.0
Date: 2019/08/21
Time complexity: O(n)
```

class: c++ 類別
使用：
```C++
class className {
  public:
  privete:
}

int main(void) {
  // 引入
  className c
}
```

vector: 如 Array，但更易使用，可以自動擴增，以循序方式存取集合
使用：
```C++
#include <vector>

// 宣告
std::vector<Template type> vect

// 新增元素
vect.push_back(element)

// 印出元素
for (auto i = vect.begin(); i != vect.end(); ++i)
    	std::cout << *i << ' ';
```

unordered_map: 即 Hash map，用於雜湊表，並使用 key-value 進行操作
```C++
unordered_map <Template type, Template type> m
```
