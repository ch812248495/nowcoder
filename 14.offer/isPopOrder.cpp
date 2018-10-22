#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool IsPopOrder(vector<int> pushV, vector<int> popV)
{
    if(pushV.size() == 0 || popV.size() == 0)
        return false;
    stack<int> s;
    for (int i = 0, j = 0; i < pushV.size(); i++)
    {
        s.push(pushV[i]);
        while(j < popV.size() && s.top()==popV[j])
        {
            s.pop();
            j++;
        }
    }
    return s.empty();
}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {4,5,3,2,1};
    vector<int> pushV(a, a+5);
    vector<int> popV(b, b+5);
    bool flag = IsPopOrder(pushV, popV);
    cout << flag << endl;
}