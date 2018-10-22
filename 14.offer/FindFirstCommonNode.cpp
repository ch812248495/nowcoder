#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {}
}

ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2)
{
    if(!pHead1 || !pHead2)
        return NULL;
    int length1=0, length2=0;
    ListNode* p1 = pHead1;
    ListNode* p2 = pHead2;
    while(p1->next)
    {
        length1++;
        p1 = p1->next;
    }
    while(p2)
    {
        length2++;
        p2 = p2->next;
    }
    if(length1>length2)
    {
        int diff = length1-length2;
        while(diff--)
            phead1 = phead1->next;
    }
    if(length1<length2)
    {
        int diff = length2-length1;
        while(diff--)
            phead2 = phead2->next;
    }
    while(phead1->val != phead2->val)
    {
        phead1 = phead1->next;
        pHead2 = phead2->next;
    }
    return phead1;
}