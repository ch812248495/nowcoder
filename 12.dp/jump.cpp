#include "head.cpp"

int countWays(int n)
{
    int p = 1;
    int q = 2;
    if(n == 1)
    {
        return 1;
    }
    int temp;
    for(int i = 3; i <= n; i++)
    {
        temp = p+q;
        p = q;
        q = temp;

    }
    return temp;
}

int coutWaysHard(int n)
{
    int p = 1;
    while(n-1)
    {
        p = 2*p;
        n--;
    }
    return p;
}
int main()
{
    cout << coutWaysHard(4) << endl;
}

