#include "head.cpp"

int getpower(int k, int N)
{
    if(N == 0)
        return 1;
    else if(N == 1)
        return k;
    return N%2 ? k*getpower(k,N/2) * getpower(k,N/2) :
                 getpower(k, N/2) * getpower(k, N/2);
}

int main()
{
    cout << getpower(4,10) << endl;
}