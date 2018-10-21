#include "head.cpp"


//最后一个节点必须相同, 如果有相交节点的话(中间相交之后接下去一定一起走完, 因为 next 指针是一样的)
bool chkIntersect(ListNode* headA, ListNode* headB)
{
    if(headA == NULL || headB == NULL)
    {
        return false;
    }
    while(headA->next)
        headA = headA->next;
    while(headB->next)
        headB = headB->next;
    if(headA == headB)
        return true;
    return false;
}

bool check(ListNode* headA, ListNode* headB)
{
    if(headA == NULL || headB == NULL)
    {
        return false;
    }
    ListNode* a = headA;
    ListNode* a1 = headA;
    ListNode* b = headB;
    ListNode* b1 = b;
    int lena = 0;
    int lenb = 0;
    while(a)
    {
        lena++;
        a = a->next;
    }
    while(b)
    {
        lenb++;
        b = b->next;
    }
    if(a>b)
    {
        int diff = a-b;
        while(diff)
        {
            a = a->next;
        }
        while(a)
        {
            if(a == b)
            {
                return true;
            }
        }
    }
    if(b>=a)
    {
        int diff = b-a;
        while(diff)
        {
            b = b->next;
        }
        while(b)
        {
            if(a==b)
            {
                return true;
            }
        }
    }
    return false;
}