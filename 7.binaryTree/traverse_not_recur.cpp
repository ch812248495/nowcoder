#include "head.cpp"

vector<int> preTraverse(TreeNode* root)
{
    vector<int> result;
    if(root == NULL)
    {
        return result;
    }
    stack<TreeNode*> S;
    S.push(root);
    TreeNode* node;
    while(!S.empty())
    {
        node = S.top();
        S.pop();
        result.push_back(node->val);
        if(node->right) S.push(node->right);
        if(node->left) S.push(node->left);
    }
    return result;
}

vector<int> InTraverse(TreeNode* root)
{
    vector<int> result;
    if(root == NULL)
    {
        return result;
    }
    stack<TreeNode*> S;
    TreeNode* current;
    while(!S.empty() || current)
    {
        if(current != NULL)
        {
            S.push(current);
            current = current->left;
        }
        if(current == NULL)
        {
            current = S.top();
            result.push_back(current->val);
            S.pop();
            current = current->right;
        }
    }
    return result;
}

vector<int> postTraverse(TreeNode* root)
{
    vector<int> result;
    if(root == NULL)
        return result;
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;

    TreeNode* ptr;
    s1.push(root);
    while(!s1.empty())
    {
        ptr = s1.top();
        s1.pop();
        s2.push(ptr);
        if(ptr->left) s1.push(ptr->left);
        if(ptr->right) s1.push(ptr->right);
    }
    while(!s2.empty())
    {
        result.push_back(s2.top()->val);
        s2.pop();
    }
    return result;
}

