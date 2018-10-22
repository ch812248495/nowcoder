#include <iostream>
#include <set>
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

ListNode* EntryNodeOfLoop(ListNode* pHead)
{
    if(pHead == NULL || pHead->next ==NULL)
        return NULL;
    ListNode* fast = pHead;
    ListNode* slow = pHead;
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast)
            break;
    }
    if(fast == NULL || fast->next ==NULL)
        return NULL;
    fast = pHead;
    while(fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}