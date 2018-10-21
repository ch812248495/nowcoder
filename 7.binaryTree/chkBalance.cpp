#include "head.cpp"

int get_height(TreeNode* root,int level,bool &res)
{
    if(root == NULL)
    {
        return level;
    }
    int lh = get_height(root->left, level+1, res);
    if(res == false)
    {
        return level;
    }
    int lr = get_height(root->right, level+1, res);
    if(res == false)
    {
        return level;
    }
    if(abs(lh-lr) > 1)
        res = false;
    return max(lh,lr);
}


bool check(TreeNode* root)
{
    bool res = true;
    get_height(root, 1, res);
    return res;
}