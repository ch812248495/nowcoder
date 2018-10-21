#include "head.cpp"

vector<int> getSwap(vector<int> num)
{
    num[0] = num[0] ^ num[1];
    num[1] = num[0] ^ num[1];
    num[0] = num[0] ^ num[1];
    vector<int> result;
    result.push_back(num[0]);
    result.push_back(num[1]);
    return result;
}