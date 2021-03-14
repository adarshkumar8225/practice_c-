
// Problem Link--->>> https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++) sum+=arr[i];
        if(sum%2==1) return 0;
        sum=sum/2;
        int dp[N+1][sum+1];
        if(N==1) return 0;
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(i==0 || j==0) 
                {
                    dp[i][j]=0;
                }
                
                else
                {
                    if(arr[i-1]>j) dp[i][j]=dp[i-1][j];
                    else 
                    {
                        if(j==arr[i-1]) dp[i][j]=1;
                        else if(dp[i-1][j-arr[i-1]]==1) dp[i][j]=1;
                        else dp[i][j]=dp[i-1][j];
                    }
                }
            }
        }
        return dp[N][sum];
    }
