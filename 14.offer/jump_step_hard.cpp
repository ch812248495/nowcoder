#include <iostream>
using namespace std;

int jump(int n)
{
    if(n <=0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return 2*jump(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    int result;
    result = jump(n);
    cout << result << endl;
}