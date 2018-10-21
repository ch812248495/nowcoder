#include "head.cpp"

vector<int> findCommonParts(ListNode* headA, ListNode* headB)
{
    vector<int> result;
    if(headA == NULL || headB == NULL)
    {
        return result;
    }
    ListNode* ptrA = headA;
    ListNode* ptrB = headB;
    while(ptrA && ptrB)
    {
        if(ptrA->val < ptrB->val)
        {
            ptrA = ptrA->next;
        }
        else if(ptrA->val > ptrB->val)
        {
            ptrB = ptrB->next;
        }
        else
        {
            if(ptrA == ptrB)
            {
                result.push_back(ptrA->val);
            }
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }
    }
    return result;
}