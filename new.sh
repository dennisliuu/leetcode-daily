#/bin/sh
mkdir "$1"
touch "$1"/main.cpp
touch "$1"/README.md
echo "```
Environment: gcc version 7.4.0
Date: 2019/08/21
Time complexity: O(n)
```

### 想法：

題目給一組數字及一個整數，從數組中找出可以湊出該整數的索引值，先建立一個雜湊表，將數組中的值與最終目標數的差放入雜湊表尋找是否存在

### 技術筆記
" > "$1"/README.md
