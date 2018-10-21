#include <iostream>

using namespace std;
int* merge(int* A, int* B, int n, int m)
{
    int indexA = n-1;
    int indexB = m-1;
    int index = m+n-1;
    while(indexA>=0 && indexB>=0)
    {
        if(A[indexA] > B[indexB])
        {
            A[index--] = A[indexA--];
        }
        else
        {
            A[index--] = B[indexB--];
        }
    }
    while(indexB>=0)
    {
        A[index--] = B[indexB--];
    }
    return A;
}

int main()
{
    int A[4] = {6,2,0,0};
    int B[] = {3,1};
    int* C = merge(A,B,2,2);
    for(int i = 0; i<4; i++)
    {
        cout << C[i] << endl;
    }
}