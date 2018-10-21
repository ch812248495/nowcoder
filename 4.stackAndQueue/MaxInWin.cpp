#include "head.cpp"
#include <utility>

typedef pair<int, int> Pair;


vector<int> maxInWin(vector<int> &num, int size)
{
    vector<int> result;
    priority_queue<Pair> Q;
    for(int i = 0; i<size-1; i++)
    {
        Q.push(Pair(num[i], i));
    }
    for(int i = size-1; i < num.size(); i++)
    {
        Q.push(Pair(num[i], i));
        Pair p = Q.top();
        while(p.second < i-size+1)
        {
            Q.pop();
            p = Q.top();
        }
        result.push_back(p.first);
    }
    return result;
}