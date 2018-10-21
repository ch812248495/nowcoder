int* mergeSort(int* A, int n)
{
    merge(A, 0, n-1);
    return A;
}

void merge(int* A, int left, int right)
{
    if(left >= right)
        return;
    int mid = (left+right)/2;
    merge(A, left, mid);
    merge(A, mid+1, right);
    join(A, left, mid, right);
}

void join(int *A, int left, int mid, int right)
{
    int temp[right-left+1];
    int l = left;
    int r = mid+1;
    int index = 0;
    while(l <= mid && r <= right)
    {
        if(A[l] <= A[r])
            temp[index++] = A[l++]
        else
            temp[index++] = A[r++]; 
    }
    while(l <= mid)
        temp[index++] = A[l++]
    while(r <= right)
        temp[index++] = A[r++]
    for(int i = 0; i < index; i++)
    {
        A[left+i] = temp[i];
    }
}