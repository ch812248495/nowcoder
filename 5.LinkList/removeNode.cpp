#include "head.cpp"

ListNode* removeNode(ListNode* pHead, int delVal)
{
    if(pHead == NULL)
    {
        cerr << ("No data") << endl;;
        return NULL;
    }
    if(pHead->val == delVal)
    {
        return pHead->next;
    }
    ListNode* ptr = pHead;
    ListNode* N = pHead->next;
    while(N != NULL)
    {
        if(N->val == delVal)
        {
            ptr->next = N->next;
            delete N;
            break;
        }
        ptr = ptr->next;
        N = N->next;
    }
    return pHead;
}

int main()
{
    ListNode* p = NULL;
    ListNode* result = removeNode(p, 10);
}
