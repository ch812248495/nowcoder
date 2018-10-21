#include "head.cpp"

ListNode* clear(ListNode* head, int val)
{
    if(head == NULL)
    {
        return NULL;
    }
    while(head->val == val)
        head = head->next;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast != NULL)
    {
        if(fast->val == val)
        {
            slow->next = fast->next;
            ListNode* temp = fast;
            fast = fast->next;
            delete temp;
        }
        else
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return head;
}