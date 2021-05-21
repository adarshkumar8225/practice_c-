// Find no. of subset with sum=x ........................................

// Dynamic Programming Approach-->> Time Complexity= O(N * X)
// N=number of elements , X=sum .


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int count_subset(int A[],int N,int X)
{
    int dp[N+1][X+1];
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=X;j++)
        {
            //Initialization of first row and first column 
            if(i==0)
            {
                if(j==0) dp[i][j]=1;
                else dp[i][j]=0;
            }
            else if(j==0) dp[i][j]=1;
            
            else
            {
                //if current value A[i-1] is greater than required sum j 
                //then current element cant be included.......
                if(j<A[i-1]) dp[i][j]=dp[i-1][j];
                // Otherwise take the sum (Not include current element + Include current element)
                else
                dp[i][j]=dp[i-1][j]+dp[i-1][j-A[i-1]];
            }
        }
    }
    //return the value in last cell of 2-D array
    return dp[N][X];
    
}


int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) cin>> A[i];
    int X;
    cin>>X;
    
    cout<<count_subset(A,N,X);

    return 0;
}
