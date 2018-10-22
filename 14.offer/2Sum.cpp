#include <iostream>
#include <vector>

using namespace std;

vector<int> FindNumberWithSum(vector<int> a, int sum)
{
    vector<int> res;
    int i, j;
    for(i = 0, j = a.size()-1; i<j; )
    {
        if(a[i] + a[j] == sum)
        {
            res.push_back(a[i]);
            res.push_back(a[j]);
            break;
        }
        if(a[i] + a[j] > sum)
            j--;
        if(a[i] + a[j] < sum)
            i++;
    }
    return res;
}

int main()
{
    int a[] = {1,2,3,3,4,5};
    vector<int> array(a, a+6);
    vector<int> result;
    result = FindNumberWithSum(array, 6);
    cout << result[0] << ' ' << result[1] << endl;
}