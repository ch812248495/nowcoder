int* bubbleSort(int* A, int n)
{
    if(!A || n<=0)
        return NULL;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
                swap(A[j], A[j+1]);
        }
    }
    return A;
}