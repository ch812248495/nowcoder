#include <iostream> 
#include <string>
#include <vector>

using namespace std;

vector<string> change(string s, char r)
{
    string temp;
    vector<string> result;
    s += r;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != r)
        {
            temp += s[i];
        }
        else
        {
            result.push_back(temp);
            temp = "";
        }
    }
    return result;
}

int main()
{
    string s = "Hello world!";
    char r = ' ';
    vector<string> result = change(s, r);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}