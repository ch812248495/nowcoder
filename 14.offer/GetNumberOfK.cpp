#include <iostream>
#include <vector>

using namespace std;
int GetLowIndex(vector<int>, int);
int GetHighIndex(vector<int>, int);


int GetNumberOfK(vector<int> data, int k)
{
    int low,high;
    low = GetLowIndex(data, k);
    high = GetHighIndex(data, k);
    return high - low + 1;
}

int GetLowIndex(vector<int> data, int k)
{
    int left = 0;
    int right = data.size()-1;
    int mid;
    while(left <= right)
    {
        mid = (left+right)/2;
        if(k<=data[mid])
            right = mid-1;
        if(k>data[mid])
            left = mid+1;
    }
    return left;
}
int GetHighIndex(vector<int> data, int k)
{
    int left = 0;
    int right = data.size()-1;
    int mid;
    while(left <= right)
    {
        mid = (left+right)/2;
        if(k<data[mid])
            right = mid-1;
        else
        {
            left = mid+1;
        }
    }
    return right;
}

int main()
{
    int a[] = {1,2,2,3,3,3,3,3,4,5,6,8};
    vector<int> array(a, a+12);
    cout << GetNumberOfK(array, 8) << endl;
}