struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

TreeNode* KthNode(TreeNode* pRoot, int k)
{
    if(pRoot == NULL || k <= 0)
    {
        return NULL
    }
    stack<TreeNode*> S;
    TreeNode* node = pRoot;
    S.push(node);
    int count = 0;
    while(!stack.empty())
    {
        if(node != NULL)
        {
            stack.push(node);
            node = node->left;
        }
        else
        {
            node = stack.top();
            stack.pop();
            count++;
            if(count == k)
                return node;
            node = node->right;
        }
    }
    retrn NULL;
}