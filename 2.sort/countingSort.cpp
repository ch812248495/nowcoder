#include <iostream>
using namespace std;

int* countingSort(int* A, int n)
{
    int a[100000] = {0};
    for(int i = 0; i < n; i++)
    {
        a[A[i]]++;
    }
    int index = 0;
    for(int i = 0; i < 100000; i++)
    {
        if(a[i])
        {
            for(int j = 0; j < a[i]; j++)
            A[index++] = i;
        }

    }
    return A;
}

int main()
{
    int A[10] = {4,3,2,5,7,5,4,7,8,10};
    A = countingSort(A, 10);
    for(int i = 0; i < 10; i++)
    {
        cout << A[i] << endl;
    }
}
