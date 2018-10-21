#include "head.cpp"

vector<int> temp;
void preTraverse(TreeNode* root)
{
    if(root == NULL)
        return;
    temp.push_back(root->val);
    preTraverse(root->left);
    preTraverse(root->right);
}

void InTraverse(TreeNode* root)
{
    if(root == NULL)
        return;
    InTraverse(root->left);

    temp.push_back(root->val);
    InTraverse(root->right);
}
void postTraverse(TreeNode* root)
{
    if(root == NULL)
        return;
    postTraverse(root->left);
    postTraverse(root->right);

    temp.push_back(root->val);
}


vector<vector<int> > convert(TreeNode* root)
{
    vector<vector<int> > result;
    preTraverse(root);
    result.push_back(temp);
    temp.clear();
    InTraverse(root);
    result.push_back(temp);
    temp.clear();
    postTraverse(root);
    result.push_back(temp);
    return result;
}