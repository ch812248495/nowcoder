#include "head.cpp"
#include <stack>

ListNode* inverse(ListNode* head, int k)
{
    if(head == NULL)
        return NULL;
    if(k == 1)
        return head;
    ListNode* ptr = head;
    stack<ListNode*> S;
    ListNode* previous = NULL;
    ListNode* start = previous;
    bool flag = 0;
    while(ptr)
    {
        for(int i = 0; i<k; i++)
        {
            if(ptr == NULL)
            {
                flag = 1;
                break;
            }
            S.push(ptr);
            ptr = ptr->next;
        }
        if(flag == 1)
        {
            ListNode* temp;
            while(!S.empty())
            {
                temp = S.top();
                S.pop();
            }
            previous->next = temp;
            break;
        }
        previous->next = S.top();
        ListNode* node = S.top();
        S.pop();
        while(!S.empty())
        {
            node->next = S.top();
            S.pop();
            node = node->next;
        }
        previous = node;
    }
    return start->next;
}