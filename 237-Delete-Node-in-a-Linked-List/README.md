```
Environment: gcc version 7.4.0
Date: 2019/08/24
Time complexity: O(n)
```

### 想法：

題目給定一個 Singly Linked List，並給予該 Linked list 的 head。

題目透過傳遞一個 val，並要求從該 Linked list 中刪除該點。

故可以透過將該點的指標 ptr 轉至下一個 val，並完成刪除

### 技術筆記

Struct: 結構，自訂不同資料型態串在一起

```
Singly Linklist 結構為一指標（指下一個）與該點之值

宣告：
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

使用方式：
struct ListNode* ptr;

```