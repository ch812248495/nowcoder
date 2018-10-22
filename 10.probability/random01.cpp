#include "head.cpp"


int f()
{
    return 0;
}

int random01()
{
    int a;
    int b;
    do
    {
        a = f();
        b = f();
    }while(a+b != 1);
    return a;
}