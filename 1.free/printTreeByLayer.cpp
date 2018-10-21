vector<vector<int> > printTree(TreeNode* root)
{
    vector<vector<int> > result;
    if(!root)
        return result;
    queue<TreeNode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        int size = Q.size();
        vector<int> temp;
        while(size--)
        {
            TreeNode* node = Q.front();
            temp.push_back(node->val);
            if(node->left) Q.push(node->left);
            if(node->right) Q.push(node->right);
            Q.pop();
        }
        result.push_back(temp);
    }
    return result;
}