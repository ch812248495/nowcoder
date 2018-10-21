#include "head.cpp"

ListNode* listDivide(ListNode* head, int val)
{
    if(head == NULL)
    {
        cerr << "No data" << endl;
        return NULL;
    }
    ListNode* smaller_head = new ListNode(0);
    ListNode* s = smaller_head;
    ListNode* equal_head = new ListNode(0);
    ListNode* e = equal_head;
    ListNode* bigger_head = new ListNode(0);
    ListNode* b = bigger_head;

    ListNode* ptr = head;
    while(ptr != NULL)
    {
        if(ptr->val < val)
        {
            smaller_head->next = ptr;
            smaller_head = ptr;
        }
        else if(ptr->val == val)
        {
            equal_head->next = ptr;
            equal_head = ptr;
        }
        else
        {
            bigger_head->next = ptr;
            bigger_head = ptr;
        }
        ptr = ptr->next;
    }
    smaller_head->next = e->next;
    equal_head->next = b->next;
    bigger_head->next = NULL;
    return s->next;
}