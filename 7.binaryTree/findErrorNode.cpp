#include "head.cpp"


vector<int> result;

void Inorder(TreeNode* root)
{
    if(root == NULL)
        return;
    Inorder(root->left);
    result.push_back(root->val);
    Inorder(root->right);
}

vector<int> findError(TreeNode* root)
{
    vector<int> out;
    Inorder(root);
    int count = 0;
    int small, big;
    for(int i = 0; i < result.size()-1; i++)
    {
        if(result[i] > result[i+1])
        {
            if(count == 0)
            {
                count++;
                small = result[i+1];
                big = result[i];
            }
            if(count == 1)
            {
                small = result[i+1];
            }
        }
    }    

    out.push_back(small);
    out.push_back(big);
    
    return out;
}