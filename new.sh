#!/bin/sh

mkdir "$1"
touch "$1"/main.cpp

cat >"$1"/README.md <<EOL

Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)

### 想法：
### 技術筆記
EOL

cd "$1"
code .