#include <iostream>
#include <math>

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL)
        {}
};

int getDepth(TreeNode* root)
{
    if(root == NULL)
        return 0;
    int left = getDepth(root->left);
    if(left == -1)
        return -1;
    int right = getDepth(root->right);
    if(right == -1)
        return -1
    return abs(left-right) >1 ? -1 : 1+max(left, right);
}

bool IsBalanced(TreeNode* pRoot)
{
    return getDepth(pRoot) != -1;
}