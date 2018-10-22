#include <iostream>
#include <stack>

using namespace std;

void push(stack<int>& s1, int node)
{
    s1.push(node);
}

int pop(stack<int>& s1, stack<int>& s2)
{
    if(s2.empty())
    {
        while(!s1.empty())
        {
            int a = s1.top();
            s2.push(a);
            s1.pop();
        }
    }

    int result = s2.top();
    s2.pop();
    return result;
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    push(s1, 1);
    push(s1, 2);
    push(s1, 3);
    int a = pop(s1, s2);
    push(s1, 4);
    a = pop(s1, s2);
    cout << a << endl;    
}