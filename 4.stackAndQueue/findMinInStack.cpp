#include "head.cpp"

class Solution
{
public:
    void push(int value)
    {
        stackPush.push(value);
        if(stackMin.empty())
            stackMin.push(value);
        else if(stackMin.top() >= value)
            stackMin.push(value);
    }
    void pop()
    {
        if(stackPush.empty())
        {
            throw("No data!");
        }
        if(stackPush.top() == stackMin.top())
        {
            stackMin.pop();
        }
        stackPush.pop();
    }
    int top()
    {
        if(stackPush.empty())
        {
            throw("No data!");
        }
        return stackPush.top();
    }

    int min()
    {
        if(stackPush.empty())
        {
            throw("No data!");
        }
        return stackMin.top();
    }
private:
    stack<int> stackPush;
    stack<int> stackMin;
};