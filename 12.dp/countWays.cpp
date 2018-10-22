#include "head.cpp"

int countWays(vector<int> penny, int n, int aim)
{
    vector<vector<int> > dp(n, vector<int>(aim+1,0));
    for(int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    for(int i = penny[0]; i <= aim; i+=penny[0])
    {
        dp[0][i] = 1;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= aim; j++)
        {
            if((j-penny[i])>=0)
                dp[i][j] = dp[i-1][j] + dp[i][j-penny[i]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n-1][aim];
}

int main()
{
    vector<int> penny;
    penny.push_back(1);
    penny.push_back(2);
    penny.push_back(5);
    cout << countWays(penny,3, 5) << endl;
}