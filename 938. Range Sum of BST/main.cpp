struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    int rangeSumBST(TreeNode *root, int L, int R)
    {
        if (root == nullptr)
            return 0;
        if (root->val >= L && root->val <= R)
            sum += root->val;
        rangeSumBST(root->left, L, R);
        rangeSumBST(root->right, L, R);
        return sum;
    }

private:
    int sum = 0;
};