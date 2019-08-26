```
Environment: gcc version 7.4.0
Date: 2019/08/27
Runtime: 4 ms, faster than 83.95%
```

### 想法：

先檢查 root 是否有值，若無則將 sum += 0;

再檢查該 root 是否為一小子數，即有左葉與右葉，倘若成立則將 sum += root->left->val;

利用遞迴的方式依序將左葉與右葉進行計算，即可成功。

### 技術筆記

Binary tree: 二元數

顧名思義該 root 具 left 與 right 節點

使用：

```C++
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct TreeNode *newNode(int data)
{
    // Allocate memory for new node
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));

    // Assign data to this node
    node->val = data;

    // Initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}
```