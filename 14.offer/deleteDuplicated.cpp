#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

ListNode* deleteDuplicated(ListNode* pHead)
{
    if(pHead == NULL || pHead->next == NULL)
        return pHead;
    ListNode* newHead = new ListNode(-1);
    newHead->next = pHead;
    ListNode* pre = newHead;
    ListNode* p = pHead;
    ListNode* next = NULL;
    while(p != NULL && p->next != NULL)
    {
        next = p->next;
        if(p->val == next->val)
        {
            while(next != NULL && next->val == p->val)
                next = next->next;
            pre->next = next;
            p = next;
        }
        else
        {
            pre = p;
            p = next;
        }
    }
    return newHead->next;
}