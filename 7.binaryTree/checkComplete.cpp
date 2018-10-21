#include "head.cpp"

bool chk(TreeNode* root) {
    if(root == NULL)
    return false;
queue<TreeNode*> S;     //只有层次遍历是使用 queue 的
S.push(root);
TreeNode* temp;
while(S.front() != NULL)    //遇到空节点之后, 只有后面的节点都是空的才是完全二叉树
{
    temp = S.front();
    S.push(temp->left);
    S.push(temp->right);
    S.pop();
}

while(!S.empty())
{
    if(S.front() == NULL)
    {
        S.pop();
        continue;
    }
    else 
        return false;
}
return true;
}