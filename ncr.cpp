     int nCr(int n, int r)
     {
        // code here
        long long unsigned int DP[n+1][r+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=r;j++)
            {
                if(i==0)
                {
                    if(j==0) DP[i][j]=1;
                    else DP[i][j]=0;
                }
                else if(j==0) DP[i][j]=1;
                else
                {
                    if(j>i) DP[i][j]=0;
                    else
                    {
                        DP[i][j]=DP[i-1][j]+DP[i-1][j-1];
                        //if value exceeds and there is chance of overflow so take modulus 
                        DP[i][j]=DP[i][j]% 1000000007;
                    }
                }
            }
        }
       
        return DP[n][r];
    }
