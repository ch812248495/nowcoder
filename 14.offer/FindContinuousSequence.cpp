#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > FindContinuousSeq(int sum)
{
    vector<vector<int> > result;
    int left = 1;
    int right = 2;
    int S;
    while(left < right)
    {
        S = (left + right)*(left + right - 1)/2;
        if(S < sum)
        {
            right++;
        }
        else if(S > sum)
        {
            left++;
        }
        else if(S == sum)
        {
            vector<int> singleRes;
            for(int i = left; i<=right; i++)
            {
                singleRes.push_back(i);

            }
            result.push_back(singleRes);
            left++;
        }
    }
    return result;
}

int main()
{
    vector<vector<int> > result = FindContinuousSeq(9);
    for (int i = 0; i<result.size(); i++)
    {
        for(int j = 0; j< result[i].size(); j++)
        {
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }
}