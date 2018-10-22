#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int x) :
        val(x), left(NULL), right(NULL)
        {}
};

vector<int> PrintFromTopToBottom(TreeNode* root)
{
    vector<int> result;
    queue<TreeNode*> q;
    q.push(root);
    while(q.empty() == false)
    {
        root = q.front();
        q.pop();
        if(root == NULL)
            continue;
        result.push_back(root->val);
        q.push(root->left);
        q.push(root->right);
    }
    return result;
}

int main()
{
    TreeNode* t = new TreeNode(10);
    TreeNode* l = new TreeNode(5);
    TreeNode* r = new TreeNode(4);
    t->left = l;
    t->right = r;
    vector<int> result = PrintFromTopToBottom(t);
    for(int i = 0; i<result.size(); i++)
    {
        cout << result[i] << endl;
    }

}