#include <iostream>
#include <vector>

using namespace std;

int minNumberInRotateArray(vector<int> array)
{
    int low = 0;
    int high = array.size()-1;
    while(low < high)
    {
        int mid = low + (high-low)/2;
        if (array[mid] > array[high])
        {
            low = mid +1;
        }
        else if(array[mid] == array[high])
        {
            high = high-1;
        }
        else
        {
            high = mid;
        }
    }
    return array[low];
}

bool search(vector<int> a,int m)
{
    bool found = false;
    int low = 0;
    int high = a.size()-1;

    while(low <= high)
    {
        int mid = (low + high)/2;
        if(a[mid] < m)
        {
            low = mid+1;
        }
        else if(a[mid] == m)
        {
            found = true;
            break; 
        }
        else
        {
            high = mid-1;
        }
    }
    return found;
}

int main()
{
    vector<int> X= {1,2,3,4,5,6};
    bool found = search(X, 7);
    cout << found << endl;

}