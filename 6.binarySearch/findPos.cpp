#include "head.cpp"

int findPos(vector<int> arr, int n, int num)
{
    int left = 0;
    int right = n-1;
    int res = -1;
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if(arr[mid] < num)
        {
            left = mid+1;
        }
        else if(arr[mid] > num)
        {
            right = mid-1;
        }
        else
        {
            while(arr[mid-1] == num) mid--;
            return mid;
        }
    }
    return -1;
}


int main()
{
    int array[] = {1,2,3,3,4};
    vector<int> a(array, array+5);
    cout << findPos(a, 5, 3) << endl;
}