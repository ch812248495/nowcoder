#include <iostream>
#include <string>

using namespace std;

string LeftRotateString(string str, int n)
{
    string prefix = "";
    string subfix = "";
    for (int i = 0; i < n; i++)
    {
        prefix += str[i];
    }
    for (int i = n; i<str.size(); i++)
    {
        subfix += str[i];
    }
    return subfix+prefix;
}

int main()
{
    string s = "abcXYZdef";
    cout << LeftRotateString(s, 3) << endl;
}