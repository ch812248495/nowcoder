#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL)
        {}
}

bool isSubtree(TreeNode* p1, TreeNode* p2)
{
    if(!p2)
        return true;
    if(!p1)
        return false;
    
    if(p1->val != p2->val)
        return false;
    
    return isSubtree(p1->left, p2->left)
        && isSubtree(p1->right, p2->right);
}

bool AhasB(TreeNode* p1, TreeNode* p2)
{
    bool result = false;
    if(p2 == NULL)
    {
        return true;
    }
    if(p1 == NULL)
    {
        return false;
    }
    if(p1->val != p2->val)
    {
        return false;
    }
    return AhasB(p1->left, p2->left) && AhasB(p1->right, p2->right);
}

bool HasSubTree(TreeNode* pRootA, TreeNode* pRootB)
{
    bool result = false;
    if(pRootA != NULL && pRootB != NULL)
    {
        if(pRootA->val == pRootB->val)
        {
            result = AhasB(pRootA, pRootB);
        }
        if (result == false)
        {
            HasSubTree(pRootA->left, pRootB);
        }
        if (result == false)
        {
            HasSubTree(pRootA->right, pRootB);
        }
    }
    return false;
}

int main()
{

}