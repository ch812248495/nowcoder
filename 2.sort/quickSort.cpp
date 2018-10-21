int* quickSort(int* A, int n)
{
    Sort(A, 0, n-1);
    return A;
}

void Sort(int* A, int left, int right)
{
    if(left >= right)
        return;
    int pivot;
    pivot = partition(A, left, right);
    Sort(A, left, pivot-1);
    Sort(A, pivot+1, right);
}

int partition(int* A, int left, int right)
{
    int temp = A[left];
    while(left < right)
    {
        while(left < right && A[right] >= temp)
            right--;
        if(left < right)
        {
            A[left] = A[right];
            left++;
        }

        while(left < right && A[left] < temp)
            left++;
        if(left < right)
        {
            A[right] = A[left];
            right--;
        }
    }
    A[left] = temp;
    return left;
}
