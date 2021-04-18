// Problem Statement--> For a given array "A" find the number of subset whose sum is equal to given "Sum"



#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int subset_count(int arr[],int sum,int n)
{
    int dp[n+1][sum+1];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            //Initialize the table
            if(i==0)
            {
                if(j==0) dp[i][j]=1;
                else dp[i][j]=0;
            }
            else if(j==0) dp[i][j]=1;
            else
            {
                //if current element is less than required sum "j"
                //then add the value obtained with including current element
                //and without including current element.......................
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                }
                //if current element is greater than j then it cant give sum=j
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
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
    cout<<subset_count(arr,sum,n);
    
}
