#include "head.cpp"
#include <algorithm>

void reverse(string &A, int left, int right)
{
    while(left < right)
        swap(A[left++], A[right--]);
}

string reverseSentence(string A, int n)
{
    reverse(A, 0, n-1);
    int start = 0;
    for(int i = 0; i<n; i++)
    {
        if(A[i] == ' ')
        {
            reverse(A, start, i-1);
            start = i+1;
            continue;
        }
        if(i == n-1)
        {
            reverse(A, start, n-1);
        }
    }
    return A;
}

int main()
{
    string A = " Hello you, world! ";
    cout << reverseSentence(A, A.size()) << endl;
}