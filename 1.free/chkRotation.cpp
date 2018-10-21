#include <iostream>
#include <string>
using namespace std;
bool chkRotation(string A, int lena, string B, int lenb)
{
    if(lena < 0 || lenb < 0 || lena != lenb)
    {
        return false;
    }
    string temp = A + A;
    int i = temp.find(B);
    if(i != -1)
        return true;
    return false;
}

int main()
{
    string a = "Hello";
    string b = "elloH";
    cout << chkRotation(a,5,b,5);
}