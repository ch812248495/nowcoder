class SelectionSort {
public:
int* selectionSort(int* A, int n)
{
        for(int i = 0; i < n; i++)
        {
            int min = i;
            for(int j = i; j < n; j++)
            {
                if(A[min] > A[j])
                    min = j;
            }
            swap(A[i], A[min]);
        }
        return A;
    }
};