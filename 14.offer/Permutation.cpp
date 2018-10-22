#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> ret;

void dfs(string str, int s)
{
    int sz = str.size();
    if(s == sz)
    {
        ret.push_back(str);
        return;
    }
    for (int i = s; i < sz; i++)
    {
        if(i != s && str[s] == str[i])
            continue;
        swap(str[s], str[i]);
        dfs(str, s+1);
    }
}

vector<string> Permutation(string str)
{
    if(str != "")
        dfs(str, 0);
    return ret;
}


int main()
{
    string s = "abc";
    vector<string> result = Permutation(s);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}