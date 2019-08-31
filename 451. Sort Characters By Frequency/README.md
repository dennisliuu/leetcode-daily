```
Environment: gcc version 7.4.0
Date: 2019/08/31
Time complexity: O(nlgn)
```

### 想法：

做表統計 -> 排序 -> 依序連接

### 技術筆記

建立頻率表

```cpp
// Unordered_map
std::unordered_map<char, int> f;
for (auto c : s)
{
    ++f[c];
}

// Vector pair
std::vector<int> f(128, 0);
for (auto c : s)
{
    ++f[c];
}
// Map
std::map<char, int> f;
for (char c : s)
{
    ++f[c];
}
```

std::sort 具有 callback function

```cpp
// 降序
std::sort(s.begin(), s.end(), [&f] (char a, char b) {
    return f[a] > f[b] || (f[a] == f[b] && a > b);
});
```

vector to string: append(n, c)

```cpp
std::string ans;
for (auto &kv : v)
{
    ans.append(kv.second, kv.first);
}
```

vector to string: stringstream

```cpp
// Dummy std::vector of strings
std::vector<std::string> sentence;
sentence.push_back("aa");
sentence.push_back("ab");

// Required std::stringstream object
std::stringstream ss;

// Populate
std::copy(sentence.begin(), sentence.end(),std::ostream_iterator<std::string>(ss,"\n"));

// Display
std::cout<<ss.str()<<std::endl;
```

emplace_front、emplace和emplace_back 屬於容器內直接建構元素

且由於是直接建構元素，不需要透過任何格式、臨時變量等即可加入，如：

```cpp
struct Foo {
    Foo(int n, double x);
};

std::vector<Foo> v;
v.emplace(someIterator, 42, 3.1416);        // 沒有臨時變量產生
v.insert(someIterator, Foo(42, 3.1416));    // 需要產生一個臨時變量
v.insert(someIterator, {42, 3.1416});       // 需要產生一個臨時變量
```

來源：https://www.itread01.com/content/1543490413.html