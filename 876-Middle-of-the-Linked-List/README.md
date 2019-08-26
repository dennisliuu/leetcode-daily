```
Environment: gcc version 7.4.0
Date: 2019/08/26
Time complexity: O(n/2)
```

想法來源：https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/

使用兩個指針，一個快一個慢，且快的是慢的兩倍速度

因此當快的抵達最後一個，慢的剛好為正中間

由於中止 while 迴圈是依照快的還有沒有「下一個」

因此即便是偶數個，也會找到中間偏右的那個