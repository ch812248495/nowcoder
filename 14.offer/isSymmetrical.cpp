#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

bool commenRoot(TreeNode* l, TreeNode* r)
{
    if(l == NULL)
        return r == NULL;
    if(r == NULL)
        return false;
    if(l->val == r->val)
        return commenRoot(pRoot->left, pRoot->right);
    else
        return false;
}

bool isSymmetrical(TreeNode* pRoot)
{
    if(pRoot == NULL)
        return true;
    return commenRoot(pRoot->left, pRoot->right);
}