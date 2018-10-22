#include <iostream>
#include <vector>

using namespace std;

bool VerifySquenceOfBST(vector<int> sequence)
{
    int size = sequence.size();
    if(0 == size)
    {
        return false;
    }

    return isLastOrder(sequence, 0, size-1);
}

bool isLastOrder(vector<int>& sequence, int b, int e)
{
    if(b == e)
    {
        return true;
    }
    int left = b;
    while(sequence[left++] < sequence[e] && left < e);
    for(int right = left; right < e; right++)
    {
        if(sequence[right] < sequence[e])
            return false;
    }
    return (isLastOrder(sequence, b, left-1) && isLastOrder(sequence, left, e-1));

}