#include <iostream>
#include <vector>
using namespace std;

vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
{
    int len = input.size();
    if(len == 0 || k>len || k<=0)
        return vector<int>();
    vector<int> res(input.begin(), input.begin()+k);

    make_heap(res.begin(), res.end());

    for(int i = k; i<len; i++)
    {
        if(input[i] < res[0])
        {
            pop_heap(res.begin(), res.end());
            res.pop_back();
            res.push_back(input[i]);
            push_heap(res.begin(), res.end());
        }
    }
    sort_heap(res.begin(), res.end());

    return res;
}

int main()
{
    int a[] = {3,2,4,5,1,4,8,6,9};
    vector<int> v(a, a+9);
    vector<int> result = GetLeastNumbers_Solution(v, 3);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}