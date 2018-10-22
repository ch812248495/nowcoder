#include <iostream>
#include <vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
{
    int inlen = in.size();
    if(inlen == 0)
    {
        return NULL;
    }

    vector<int> left_pre, right_pre, left_in, right_in;
    TreeNode* head = new TreeNode(pre[0]);

    int gen = 0;
    for(int i=0; i<inlen; i++)
    {
        if (in[i] == pre[0])
        {
            gen = i;
            break;
        }
    }
    for(int i = 0; i<gen; i++)
    {
        left_in.push_back(in[i]);
        left_pre.push_back(pre[i+1]);
    }
    for(int i = gen+1; i<inlen;i++)
    {
        right_in.push_back(in[i]);
        right_pre.push_back(pre[i]);
    }

    head->left = reConstructBinaryTree(left_pre, left_in);
    head->right = reConstructBinaryTree(right_pre, right_in);
    return head;
}

int main()
{

 vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
 vector<int> in = { 4, 7, 2, 1, 5, 3, 8, 6 };
 TreeNode* root= reConstructBinaryTree(pre, in);

}