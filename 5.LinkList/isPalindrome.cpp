#include "head.cpp"
#include <stack>
bool isPalindrome(ListNode* pHead)
{
    stack<ListNode*> S;
    if(pHead == NULL)
        return true;
    ListNode* slow = pHead;
    ListNode* fast = pHead;
    while(fast)
    {
        S.push(slow);
        if(fast->next == NULL)
        {
            S.pop();
            break;
        }
        if(fast->next->next == NULL)
        {
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    slow = slow->next;
    while(slow)
    {   
        if(slow->val == S.top()->val)
        {
            S.pop();
            slow = slow->next;
        }
        else
        {
            return false;
        }
    }
    return true;
}