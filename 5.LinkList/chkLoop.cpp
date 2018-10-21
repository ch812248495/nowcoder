#include "head.cpp"

int chkLoop(ListNode* head, int adjust)
{
    if(head == NULL || head->next == NULL)
        return -1;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            break;
    }
    if(slow == fast)
    {
        fast = head;
        while(fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return fast->val;
    }
    else
        return -1;

}