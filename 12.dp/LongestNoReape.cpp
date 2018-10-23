#include "head.cpp"

int f(string s)
{
    int dp[256] = {-1};
    int left = 0;
    int result = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(dp[s[i]] >= left)
        {
            left = dp[s[i]] + 1;
        }
        dp[s[i]] = i;
        result = max(result, i-left+1);
    }
    return result;
}

int main()
{
    string s = "abcdddcefgadvt";
    cout << f(s) << endl;
}