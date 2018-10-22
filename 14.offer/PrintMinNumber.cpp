#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool Bigger(int a, int b)
{
    string aPlusb = to_string(a) + to_string(b);
    string bPlusa = to_string(b) + to_string(a);
    if(aPlusb > bPlusa)
        return true;
    return false;
}


string PrintMinNumber(vector<int> a)
{
    if (a.size() == 0)
        return 0;
    for(int i = 0; i < a.size()-1; i++)
    {
        for(int j = 0; j<a.size()-1-i; j++)
        {
            if (Bigger(a[j], a[j+1]))
            {
                swap(a[j], a[j+1]);
            }
        }
    }
    string result = "";
    for(int i = 0; i<a.size(); i++)
    {
        result += to_string(a[i]);
    }
    return result;
}

int main()
{
    int a[] = {2,21};
    vector<int> array(a, a+2);
    string result = PrintMinNumber(array);
    cout << result << endl;
}