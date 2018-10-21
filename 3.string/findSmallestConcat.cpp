#include "head.cpp"

bool compare(string a, string b)
{
    return (a+b) < (b+a);
}

string findSmallest(vector<string> strs, int n)
{
    string result;
    sort(strs.begin(), strs.end(), compare);
    for(int i=0;i<n; i++)
    {
        result += strs[i];
    }
    return result;
}

int main()
{
    string a[] = {"abc", "de", "bc"};
    vector<string> strs(a, a+3);
    cout << findSmallest(strs, 3);
}