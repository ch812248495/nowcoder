#include "head.cpp"

int countWays(int n)
{
    int dp[301];
    dp[0] = 0;
    dp[1] = 1;
    if(n == 0 || n == 1)
    {
        return dp[n];
    }
    for(int i = 3; i <= n; i++)
        dp[i] = (i-1) * (dp[i-1] + dp[i-2]);
    return dp[n];
}