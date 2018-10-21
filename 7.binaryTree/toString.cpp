#include "head.cpp"
#include <string>

void traverse(string &s, TreeNode* root)
{
    stack<TreeNode*> S;
    S.push(root);
    TreeNode* ptr;
    while(!S.empty())
    {
        ptr = S.top();
        S.pop();
        if(ptr == NULL)
        {
            s += "#!";
            continue;
        }
        s += to_string(ptr->val);
        s += '!';
        S.push(ptr->right);
        S.push(ptr->left);
    }
}  

void traverse_recur(string &s, TreeNode* root)
{
    if(root == NULL)
    {
        s += "#!";
        return;
    }
    s += to_string(root->val);
    s += '!';
    traverse_recur(s, root->left);
    traverse_recur(s, root->right);
}

string toString(TreeNode* root)
{
    string result;
    traverse(result, root);
    return result;
}

