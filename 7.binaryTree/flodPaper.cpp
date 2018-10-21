#include "head.cpp"
#include <string>

vector<string> result;
void core(int n, int current, bool flag)
{
    if(current <= n)
    {
        core(n, current+1, true);
        if(flag == true)
            result.push_back("down");
        else
            result.push_back("up");
        core(n, current+1, false);
    }
    return;
}


vector<string> foldPaper(int n)
{
    core(n, 1, true);
    return result;
}

int main()
{
    vector<string> s = foldPaper(3);
    for(int i = 0; i< s.size(); i++)
    {
        cout << s[i] << endl;
    }
}