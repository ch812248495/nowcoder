#include <iostream>
#include <unordered_map>

using namespace std;

struct RandomListNode
{
    int label;
    struct RandomListNode* next, *random;
    RandomListNode(int x) :
        label(x), next(NULL), random(NULL)
    {}
};

RandomListNode* Clone(RandomListNode* pHead)
{
    if(!pHead)
        return NULL;
    unordered_map<RandomListNode*, RandomListNode*> M;
    for(RandomListNode* p = pHead; p!=NULL; p = p->next)
    {
        M[p] = new RandomListNode(p->label);
    }

    for(RandomListNode* p = pHead; p!=NULL; p = p->next)
    {
        M[p]->next = M[p->next];
        M[p]->random = M[p->random];
    }
    return M[p->pHead];
}