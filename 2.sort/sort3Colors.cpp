#include <iostream>
#include <vector>
using namespace std;

vector<int> sort3Colors(vector<int> A, int n)
{
    int zeroindex = -1;
    int twoindex = n;
    int i = 0;
    while(i<twoindex)           //当遍历到2区域的上一个节点的时候停止就行,不然会错误
    {
        if(A[i] == 0)
        {
            swap(A[++zeroindex], A[i++]);
        }
        else if(A[i] == 1)
            i++;
        else
        {
            swap(A[--twoindex], A[i]);
        }
    }
    return A;
}

int main()
{

    int a[] = {0,0,2,1,2,0,1,1,2};
    vector<int> A(a, a+9);
    vector<int> result = sort3Colors(A, 9);
    for(int i = 0; i<result.size(); i++)
    {
        cout << result[i] << endl;
    }
}