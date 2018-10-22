#include <iostream>
#include <vector>

using namespace std;

vector<int> maxInWin(const vector<int>& num, unsigned int size)
{
    vector<int> result;
    if(num.size() == 0 || size <=0 )
        return result;
    if(size >= num.size())
        return num;
    int lo = 0;
    int hi = size-1;
    int max;
    
    while(hi <= (num.size()-1))
    {
        for(int i )
    }
}