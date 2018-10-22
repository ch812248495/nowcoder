#include <queue>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

vector<vector<int> > Print(TreeNode* pRoot)
{
    vector<vector<int> > result;
    if(!pRoot)
        return result;
    queue<TreeNode*> Q;
    Q.push(pRoot);
    bool flag = true;
    while(!Q.empty())
    {
        int len = Q.size();
        vector<int> temp(len);
        for(int i = 0; i<len;i++)
        {
            TreeNode* p = Q.front();
            Q.pop();
            if(p->left) Q.push(p->left);
            if(p->right) Q.push(p->right);
            int index = flag ? i; len-1-i;
            temp[index] = p->val;
        }
        flag = !flag;
        result.push_back(temp);
    }
    return res;
    
}