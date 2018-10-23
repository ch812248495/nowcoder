#include "head.cpp"
int maxValue(vector<int> w, vector<int> v, int n, int cap) {
    // write code here
    int dp[n+1][cap+1];
    for(int j = 0; j <= cap; ++j){
        dp[1][j] = (j >= w[0] ? v[0] : 0);
    }
        
    for(int i = 2; i <= n; ++i){
        for(int j = 0 ; j <= cap; ++j){
            if(j >= w[i-1])
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
            else
                dp[i][j] = dp[i-1][j];

        }
    }
        
    return dp[n][cap];
}