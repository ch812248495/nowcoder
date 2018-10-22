#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int MoreThanHalf(vector<int> numbers)
{
    int n = numbers.size();
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
    {
        m[numbers[i]]++;
        if(m[numbers[i]]>n/2)
            return numbers[i];
    }
    return 0;
}

int main()
{
    int b[] = {1,2,3,2,2,2,5,4,2};
    vector<int> a(b,b+9);
    cout << MoreThanHalf(a) << endl;
}