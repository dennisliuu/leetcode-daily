```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```

### 想法：

根據題目意思是要計算一個封閉路徑的總長

由於是封閉路徑，所以有兩種不同走法，可以先計算一個再用總和減去

### 技術筆記

accumulate: 計算 vector 總和，其用法為從第 n 個元素加到第 m 個元素，並在總和加上 k

```cpp
// accumulate example
#include <iostream>     // std::cout
#include <functional>   // std::minus
#include <numeric>      // std::accumulate

int myfunction (int x, int y) {return x+2*y;}
struct myclass {
	int operator()(int x, int y) {return x+3*y;}
} myobject;

int main () {
  int init = 100;
  int numbers[] = {10,20,30};

  std::cout << "using default accumulate: ";
  std::cout << std::accumulate(numbers,numbers+3,init);
  std::cout << '\n';

  std::cout << "using functional's minus: ";
  std::cout << std::accumulate (numbers, numbers+3, init, std::minus<int>());
  std::cout << '\n';

  std::cout << "using custom function: ";
  std::cout << std::accumulate (numbers, numbers+3, init, myfunction);
  std::cout << '\n';

  std::cout << "using custom object: ";
  std::cout << std::accumulate (numbers, numbers+3, init, myobject);
  std::cout << '\n';

  return 0;
}
```
來源：http://www.cplusplus.com/reference/numeric/accumulate/