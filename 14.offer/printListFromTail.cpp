#include <iostream>
#include <list>
#include <vector>
#include <stack>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode* next;

};

vector<int> printListFromTail(ListNode* head)
{
    vector<int> value;
    stack<int> s;
    ListNode* ptr = head;
    if(!ptr)
        return value;

    while(ptr)
    {
        s.push(ptr->val);
        ptr = ptr->next;
    }
    while(!s.empty())
    {
        value.push_back(s.top());
        s.pop();
    }
    return value;
}

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

int main()
{
    ListNode* L = read();

    vector<int> a = printListFromTail(L);
    for(int i = 0; i<a.size(); i++)
    {
        cout << a[i] << ' ';
    }

}