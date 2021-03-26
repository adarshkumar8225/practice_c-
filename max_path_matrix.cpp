
//Problem Statement-->>> https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1#
// Find maximum sum path in the matrix starting from any column of row 0.

    int max_m(int a,int b,int c)
    {
         int max;
 
          if (a>b && a>c) max = a;
          else if (b>c) max = b;
          else max = c;
        return max;
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int dp[N][N];
        //Initialize the 2-D array with respective element of matrix.
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                dp[i][j]=Matrix[i][j];
            }
        }
        int max1=1;
        for(int i=N-2;i>=0;i--)
        {
            for(int j=0;j<N;j++)
            {
                if(j==0)
                {
                    dp[i][j]=max(dp[i][j]+dp[i+1][j],dp[i][j]+dp[i+1][j+1]);
                    if(dp[i][j]>max1) max1=dp[i][j];
                }
                else if(j==N-1)
                {
                    dp[i][j]=max(dp[i][j]+dp[i+1][j],dp[i][j]+dp[i+1][j-1]);
                    if(dp[i][j]>max1) max1=dp[i][j];
                }
                else
                {
                   dp[i][j]=max_m(dp[i][j]+dp[i+1][j],dp[i][j]+dp[i+1][j-1],dp[i][j]+dp[i+1][j+1]);
                    if(dp[i][j]>max1) max1=dp[i][j];
                }
            }
        }
        return max1;
    }
