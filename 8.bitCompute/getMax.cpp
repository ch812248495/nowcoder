#include "head.cpp"



int sign(int val)
{
    return (val>>31)&1;
}

int getMax(int a, int b)
{
    int c = a-b;
    return b*sign(c) + a*(sign(c)^1);
}