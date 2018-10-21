#include "head.cpp"

int getMin(vector<int> a, int n)
{
    int left = 0;
    int right = n-1;
    int mid = 0;
    while(a[left] >= a[right])
    {
        if(right - left == 1)
            return a[right];
        mid = left + (right-left)/2;
        if(a[left] > a[mid])
            right = mid;
        else if(a[mid] > a[right])
            left = mid;
    }
    return a[mid];
}