#include <iostream>
#include <vec>


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

vector<vector<int> > allRes;
vector<int> path;

void Find(TreeNode* root, int sum)
{
    if(root == NULL)
        return;
    path.push_back(root->val);
    if(!root->left && !root->right && sum == root->val)
        allRes.push_back(path);
    else
    {
        if(root->left)
            Find(root->left, sum-root->val);
        if(root->right)
            Find(root->right, sum-root->val);
    }
    path.pop_back();
}

vector<vector<int> > FindPath(TreeNode* root, int expectNumber)
{
    Find(root, expectNumber);
    return allRes;
} 