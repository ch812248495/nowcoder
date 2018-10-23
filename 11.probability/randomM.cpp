#include "head.cpp"

vector<int> print(vector<int> arr, int N, int M)
{
    vector<int> result;
    for(int i = 0; i < M; i++)
    {
        int index = rand()%(N-i);
        result.push_back(arr[index]);
        swap(arr[index], arr[N-1-i]);
    }
    return result;
}