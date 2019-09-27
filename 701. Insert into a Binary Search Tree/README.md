```
Environment: gcc version 7.4.0
Date: 2019//
Time complexity: O(n)
```
### 想法：

由於是 BST，因此可以由 val 知道要遞歸至左或右子樹。

討論區看到的厲害解法，但時間一樣

```C
TreeNode **cur = &root;
while( *cur )
    cur = (val > (*cur)->val) ? &(*cur)->right : &(*cur)->left;
*cur = new TreeNode(val);
return root;
```


### 技術筆記
