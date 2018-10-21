#include "head.cpp"

void reverse(string &A, int left, int right)
{
    while(left < right)
    {
        swap(A[left++], A[right--]);
    }
}

string stringTranslation(string A, int n, int len)
{
    reverse(A, 0, len-1);
    reverse(A, len, n-1);
    reverse(A, 0, n-1);
}