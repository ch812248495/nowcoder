#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode* next;
};

ListNode* read()
{
    int n;
    cin >> n;
    ListNode* header;
    header->next = NULL;
    ListNode* ptr = header;
    while(n--)
    {
        ListNode* l = new(ListNode);
        cin >> l->val;
        ptr->next = l;
        l->next = NULL;
        ptr = l;
    }
    return header->next;
}

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
{
    if (pListHead == NULL || k<=0)
    {
        return NULL;
    }
    ListNode* pEarly = pListHead;
    ListNode* pLatter = pListHead;
    for (int i=1; i<k; i++) // 先走 k-1步
    {
        if(pEarly->next != NULL)
            pEarly = pEarly->next;
        else
            return NULL;
    }
    while(pEarly->next != NULL)
    {
        pEarly = pEarly->next;
        pLatter = pLatter->next;
    }
    return pLatter;

}

int main()
{
    ListNode* a = read();
    int k;
    cout << "enter the kth from tail" << endl;
    cin >> k;
    ListNode* b =  FindKthToTail(a, 2);
    cout << b->val << endl;

}