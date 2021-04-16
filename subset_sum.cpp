//Problem : we are given an array and a value k . then we have to find is there any possible subset whose sum is equal to k.

// Using Dynamic Programming approach T(n)=O(N^2)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool subset_sum(int arr[],int sum, int n)
{
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            {
                if(j==0) dp[i][j]=1;
                else dp[i][j]=0;
            }
            else if(j==0) dp[i][j]=1;
            else
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum;
    cin>>sum;
    cout<<subset_sum(arr,sum,n);
}
