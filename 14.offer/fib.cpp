#include <iostream>

using namespace std;

int fib(int n)
{
    int p=0;
    int q=1;
    while(n--)
    {
        q = p+q;
        p = q-p;
    }
    return p;
}

int main()
{

    cout << fib(2) << endl;
    cout << fib(3) << endl;
    cout << fib(4) << endl;
    cout << fib(5) << endl;
}