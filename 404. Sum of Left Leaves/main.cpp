#include <iostream>

// Definition for a binary tree node.
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

class Solution
{
public:
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (!root)
            return 0;
        int sum = 0;
        if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
        {
            sum += root->left->val;
        }
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    struct TreeNode *root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(17);
    std::cout << s.sumOfLeftLeaves(root) << std::endl;
    return 0;
}
