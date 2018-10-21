#include "head.cpp"

vector<int> findOdds(vector<int> arr, int n)
{
    int temp = 0;
    for (int i = 0; i< arr.size(); i++)
    {
        temp ^= arr[i];
    }
    int x = 1;
    while((x & temp) == 0)
    {
        x <<= 1;
    }
    int a=0, b=0;
    for(int i = 0; i < n; i++)
    {
        if((arr[i] & x )!= 0)
            a ^= arr[i];
        else
            b^= arr[i];
    }
    vector<int> result;
    if(a < b)
    {
        result.push_back(a);
        result.push_back(b);
    }
    else
    {
        result.push_back(b);
        result.push_back(a);
    }
    return result;
}