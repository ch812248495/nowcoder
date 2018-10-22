#include <iostream>

using namespace std;

int jump(int n)
{
    int p=0;
    int q = 1;
    while(n--)
    {
        q = p+q;
        p = q-p;
    }
    return q;
}

int main()
{
    int n;
    cin >> n;
    int count = jump(n);
    cout << count << endl;
}