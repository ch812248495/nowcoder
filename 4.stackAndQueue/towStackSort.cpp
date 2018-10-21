#include "head.cpp"

stack<int> s1;
stack<int> s2;

vector<int> twoStackSort(vector<int> numbers)
{
    for(int i = 0; i<numbers.size(); i++)
    {
        s1.push(numbers[i]);
    }
    s2.push(s1.top());
    s1.pop();
    while(!s1.empty())
    {
        int x = s1.top();
        s1.pop();
        while(!s2.empty() && s2.top() > x )
        {
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(x);
    }
    vector<int> result;
    while(!s2.empty())
    {
        result.push_back(s2.top());
        s2.pop();
    }
    return result;
}