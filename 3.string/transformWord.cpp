#include <head.cpp>

bool chkTransform(string A, int lena, string B, int lenb)
{
    if(lena != lenb)
        return false;
    int a[256] = {0};
    int b[256] = {0};
    for (int i = 0; i<lena; i++)
    {
        a[A[i]]++;
    }
    for (int i = 0; i<lenb; i++)
    {
        b[B[i]]++;
    }
    for(int i = 0; i<256; i++)
    {
        if(a[i] == b[i])
            continue;
        else
            return false;
    }
    return true;

}