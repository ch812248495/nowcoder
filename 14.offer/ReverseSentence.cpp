#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int findthelength(string s)
{
    int result = 0;
    if(s.size() == 0)
        return result;
    int front = 0;
    unordered_map<char, int> MAP;
    for(int i = 0; i < s.size(); i++)
    {
        if(MAP.count(s[i]) == 1)
        {
            front = i;
        }
        MAP[s[i]] = i;
        result = max(result, i-front+1);
    }
    return result;
}

int main()
{
    string s = "a";
    cout << findthelength(s) << endl;
    string a = "aabaddc";
    cout << findthelength(a) << endl;
}