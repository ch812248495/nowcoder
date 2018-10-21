#include "head.cpp"

stack<int> stackPush;
stack<int> stackPop;

void push(int x)
{
    stackPush.push(x);
}

int pop()
{
    if(!stackPop.empty())
    {
        int value = stackPop.top();
        stackPop.pop();
        return value;
    }
    else
    {
        while(!stackPush.empty())
        {
            stackPop.push(stackPush.top());
            stackPush.pop();
        }
        int value = stackPop.top();
        stackPop.pop();
        return value;
    }
}

vector<int> twoStack(vector<int> ope, int n)
{
    vector<int> result;
    for(int i = 0; i < n; i++)
    {
        if(ope[i] != 0)
        {
            push(ope[i]);
        }
        else
        {
            result.push_back(pop());
        }
    }
    return result;
}