#include <iostream>

using namespace std;
int count(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int p = 0;
    int q = 1;
    while(n--)
    {
        q = p+q;
        p = q-p;
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    int result = count(n);
    cout << result << endl;
}