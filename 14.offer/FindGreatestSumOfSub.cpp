#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindGreatestSumOfSubArray(vector<int> array)
{
    if(array.size() == 0)
    {
        return 0;
    }
    int result = array[0];
    int Current = array[0];
    for(int i = 1; i < array.size(); i++)
    {
        Current = max(Current+array[i],array[i]);
        if(Current > result)
            result = Current;
    }
    return result;
}

int main()
{
    int a[] = {-8,-1,-10,-7};
    vector<int> array(a, a+4);
    int result = FindGreatestSumOfSubArray(array);
    cout << result << endl;
}