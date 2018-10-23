#include "head.cpp"

int findLCS(string A, int n, string B, int m) {
    // write code here
    int dp[302][302];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j])
                dp[i+1][j+1]=dp[i][j]+1;
            else 
                dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
        }
    }
    return dp[n][m];
}