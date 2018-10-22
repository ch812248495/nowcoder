#include <iostream>
#include <list>


using namespace std;

struct ListNode
{
    int val;
    struct ListNode* next;
    ListNode(int x) :
        val(x), next(NULL)
        {
        }
};

ListNode* ReverseList(ListNode* pHead)
{
    ListNode* p = pHead;
    ListNode* pre = NULL;
    ListNode* latter = NULL;
    while(p)
    {
        latter = p->next;
        p->next = pre;
        pre = p;
        p = latter;
    }
    return pre;
}
ListNode* read()
{
    int n;
    cin >> n;
    ListNode* header = new ListNode(0);
    ListNode* ptr = header;
    while(n--)
    {
        int num;
        cin >> num;
        ListNode* temp = new ListNode(num);
        ptr->next = temp;
        ptr = temp;
    }
    return header->next;
}

int main()
{
    ListNode* L = read();
    ListNode* result = ReverseList(L);
    cout << result->val << endl;


}