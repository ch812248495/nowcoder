#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int FirstNotRepeatingChar(string str)
{
    unordered_map<char, int> m;
    for(int i = 0; i< str.size(); i++)
    {
        m[str[i]]++;
    }
    for(int i = 0; i<str.size(); i++)
    {
        if(m[str[i]] == 1)
            return i;
    }
    return -1;
}

int main()
{
    string s = "google";
    cout << FirstNotRepeatingChar(s) << endl;
}