#include <iostream>

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL
        {}
};

TreeNode* Convert(TreeNode* pRootOfTree)
{
    if(pRootOfTree == NULL)
        return NULL;
    TreeNode* pre = NULL;
    convertHelper(pRootOfTree, pre);

    TreeNode* res = pRootOfTree;
    while(res->left)
        res = res -> left;
    return res;
    
}

void convertHelper(TreeNode* cur, TreeNode*& pre)
{
    if(cur == NULL)
        return;
    convertHelper(cur->left, pre);

    cur -> left = pre;
    if(pre)
        pre -> right = cur;
    pre = cur;

    convertHelper(cur->right, pre);
}