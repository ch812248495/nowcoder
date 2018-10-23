#include "head.cpp"

int getLIS(vector<int> A, int n) 
{
    int dp[500];
    dp[0] = 1;
    for(int i = 1; i < A.size(); i++)
    {
        int max = 0;
        for(int j = 0; j < i; j++)
        {
            if(dp[j] > max && A[j] < A[i] )
                max = dp[j];
        }
        dp[i] = max+1;
    }
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        if (dp[i] > result)
            result = dp[i];
    }
    return result;    
}