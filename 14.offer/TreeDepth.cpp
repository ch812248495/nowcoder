#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):
        val(x), left(NULL), right(NULL)
        {}
};

int TreeDepth(TreeNode* pRoot)
{
    if(pRoot == NULL)
    {
        return 0;
    }
    return max(1+TreeDepth(pRoot->left), 1+TreeDepth(pRoot->right));
}