```
Environment: gcc version 7.4.0
Date: 2019/08/27
Time complexity: O(n)
```

### 想法：

經典題，利用一個 vector 容器當作 stack，遇到 "(" "[" "{" 就直接壓入

接下來只要與到可以配對的，就把它從 stack 中 pop 出來，否則再次壓入

其中比較要注意的是可能 vector 被 pop 的 size 已經為 0 了，就會造成 underflow

### 技術筆記

stack: Last-In-First-Out

基本的 stack 有將資料 **push** 的功能，也有將最上面的資料 **pop** 的功能

其餘可能還有 *peek* 看一下最頂端的值啦、是不是 *empty* 啦，或者是取得他的 *size* 等。