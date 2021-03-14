
//Problem Link->>>> https://practice.geeksforgeeks.org/problems/coin-change2448/1#

    long long int count( int S[], int m, int n )
    {
        long long int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                
                if(i==0) 
                {
                    if(j==0) dp[i][j]=1;
                    else
                    dp[i][j]=0;
                }
                else if(j==0) dp[i][j]=1;
                
                else
                {
                    if(S[i-1]>j) dp[i][j]=dp[i-1][j];
                    else
                    {
                        dp[i][j]=dp[i-1][j]+dp[i][j-S[i-1]];
                    }
                }
            }
        }

        return dp[m][n];
    }
