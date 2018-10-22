#include <iostream>
using namespace std;

struct TreeNode 
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL)
        {
        }
}

void Mirror(TreeNode* pRoot)
{
    if(pRoot == NULL)
    {
        return;
    }
    TreeNode *tmp = pRoot->left;
    pRoot->left = pRoot->right;
    pRoot->right = tmp;
    Mirror(pRoot->left);
    Mirror(pRoot->right);
}