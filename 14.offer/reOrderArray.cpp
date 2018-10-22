#include <iostream>
#include <vector>

using namespace std;

void reOrderArray(vector<int>& array)
{
    auto iter = array.begin();
    int size = array.size();
    int temp;
    while(size--)
    {
        if(*iter %2 == 0)
        {
            temp = *iter;
            iter = array.erase(iter);
            array.push_back(temp);
        }
        else
        {
            iter++;
        }
    }
}

int main()
{
    vector<int> a = {3,1,2,4,6,7,19,8,32};
    reOrderArray(a);
    for(int i = 0; i<a.size(); i++)
    {
        cout << a[i] << ' ' << endl;
    }
}