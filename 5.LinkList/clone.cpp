#include "head.cpp"

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

RandomListNode* clone(RandomListNode* pHead)
{
    if(pHead == NULL)
    {
        return NULL;
    }
    RandomListNode* p = pHead;
    while(p)
    {
        RandomListNode* temp = new RandomListNode(p->label);
        temp->next = p->next;
        p->next = temp;
        p = temp->next;
    }
    p = pHead;
    while(p)
    {
        p->next->random = p->random->next;
        p = p->next->next;
    }
    p = pHead;
    RandomListNode* dup = p->next;
    RandomListNode* newHead = dup;
    while(p)
    {
        p->next = dup->next;
        dup->next = p->next->next;
        p = p->next;
        dup = dup->next;
    }
    return newHead;
}