#include "head.cpp"
#include <vector>

int longestSubString(string s, int n)
{
    vector<int> dp(256, -1);
    int max_len = 0;
    int front = 0;
    for(int i = 0; i < n; i++)
    {
        if(dp[s[i]] != -1 && dp[s[i]] >= front)
        {
            front = dp[s[i]] + 1;
        }
        dp[s[i]] = i;

        max_len = max(max_len, i-front+1);
    }
    return max_len;
}
