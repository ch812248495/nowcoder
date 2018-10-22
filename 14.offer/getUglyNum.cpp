#include <iostream>
#include <vector>

using namespace std;

int GetUglyNum(int n)
{
    vector<int> array;
    array.push_back(1);
    int p2=0;
    int p3=0;
    int p5=0;
    int newNumber = 1;
    while(array.size() != n)
    {
        newNumber = min(array[p2]*2, min(array[p3]*3, array[p5]*5));
        if(array[p2]*2 == newNumber) p2++;
        else if(array[p3]*3 == newNumber) p3++;
        else p5++;
        array.push_back(newNumber);
    }
    return newNumber;
}

int main()
{
    cout << GetUglyNum(1) <<endl;
}