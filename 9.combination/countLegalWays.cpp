#include "head.cpp"

long f(int n)
{
    if(n == 1)
        return 1;
    return n*f(n-1);
}

int countLegalWays(int n)
{
    return f(2*n)/f(n)/f(n)/(n+1);
}
