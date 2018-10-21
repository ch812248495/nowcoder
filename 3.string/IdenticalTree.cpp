#include "head.cpp"
#include <string>
#include <queue>


void preTraverse(TreeNode* A, string &a)
{
    if(!A)
    {
        a += "#!";
        return;
    }
    else 
    {
        a += to_string(A->val);
        a += '!';
    }
    preTraverse(A->left, a);
    preTraverse(A->right, a);

}

bool chkIdentical(TreeNode* A, TreeNode* B) {
    if(A == NULL && B == NULL)
        return true;
    string a = "";
    string b = "";
    preTraverse(A,a);
    preTraverse(B,b);

    return a.find(b) == -1? false:true;
    }

int main()
{
    string a;
    TreeNode* root = new TreeNode(10);
    TreeNode* left = new TreeNode(5);
    TreeNode* right = new TreeNode(3);
    root->left = left;
    right->right = right;
    preTraverse(root, a);
    cout << a << endl;
}