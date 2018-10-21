#include "head.cpp"

int findPos(vector<int> a, int n)
{
    int left = 0;
    int right = n-1;
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if(a[mid] < mid)
            left = mid+1;
        else if(a[mid] > mid)
            right = mid-1;
        else 
        {
            while(a[mid-1] == (mid-1)) mid--;
            return mid;
        }
    }
    return -1;
}